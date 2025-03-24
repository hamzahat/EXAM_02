#include <stdlib.h>
#include <unistd.h>

void brainfuck(char *code)
{
    unsigned char memory[2048] = {0};  // 2048 bytes initialized to 0
    unsigned char *ptr = memory;              // Memory pointer
    int loop;

    while (*code)  // Iterate over Brainfuck code
    {
        if (*code == '>')
            ptr++;  // Move right
        else if (*code == '<')
            ptr--;  // Move left
        else if (*code == '+')
            (*ptr)++;  // Increment value
        else if (*code == '-')
            (*ptr)--;  // Decrement value
        else if (*code == '.')
            write(1, ptr, 1);  // Print current byte
        else if (*code == '[')
        {
            if (!*ptr)  // If value at current cell is 0, skip loop
            {
                loop = 1;
                while (loop)
                {
                    code++;
                    if (*code == '[') loop++;
                    if (*code == ']') loop--;
                }
            }
        }
        else if (*code == ']')
        {
            if (*ptr)  // If value is nonzero, go back to matching '['
            {
                loop = 1;
                while (loop)
                {
                    code--;
                    if (*code == ']') loop++;
                    if (*code == '[') loop--;
                }
            }
        }
        code++;  // Move to the next instruction
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        brainfuck(argv[1]);  // Interpret the Brainfuck code
    write(1, "\n", 1);  // Print newline if no input or after execution
    return (0);
}

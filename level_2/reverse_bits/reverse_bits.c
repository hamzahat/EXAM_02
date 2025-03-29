unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 8; // 8 bits in a 1 byte

    while (i--)
    {
        result = (result << 1) | (octet & 1); // Shift left, add LSB
        octet >>= 1; // Shift right to process next bit
    }
    return result;
}
/*
 int main:

#include <stdio.h>

int main(void)
{
    unsigned char num = 0b00100110; // 38 in decimal
    unsigned char reversed = reverse_bits(num);

    printf("Reversed: %d\n", reversed); // Expected: 100 (0b01100100)
    return 0;
}

*/


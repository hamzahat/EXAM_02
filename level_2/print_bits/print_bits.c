#include <unistd.h>

void    print_bits(unsigned char octet)
{
    short mask = 256; // 256 in binary is 100000000 (9 bits)
    while ((mask >>= 1)) // Shifts right, starting from 100000000 to 000000001
    {
        if (octet & mask)
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
}

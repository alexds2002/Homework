#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
struct A
{
    uint8_t bit1 : 1;
    uint8_t bit2 : 1;
    uint8_t bit3 : 1;
    uint8_t bit4 : 1;
    uint8_t bit5 : 1;
    uint8_t bit6 : 1;
    uint8_t bit7 : 1;
    uint8_t bit8 : 1;
    uint8_t bit9 : 1;
    uint8_t bit10 : 1;
    uint8_t bit11 : 1;
    uint8_t bit12 : 1;
    uint8_t bit13 : 1;
    uint8_t bit14 : 1;
    uint8_t bit15 : 1;
    uint8_t bit16 : 1;

};
union Swap
    {
        uint16_t bytes;
        struct A 
        {
            uint8_t bit1 : 1;
            uint8_t bit2 : 1;
            uint8_t bit3 : 1;
            uint8_t bit4 : 1;
            uint8_t bit5 : 1;
            uint8_t bit6 : 1;
            uint8_t bit7 : 1;
            uint8_t bit8 : 1;
            uint8_t bit9 : 1;
            uint8_t bit10 : 1;
            uint8_t bit11 : 1;
            uint8_t bit12 : 1;
            uint8_t bit13 : 1;
            uint8_t bit14 : 1;
            uint8_t bit15 : 1;
            uint8_t bit16 : 1;
        } B;
    };
void swapBytes(uint16_t *word);
int main()
{
    uint16_t wrd = 15;
    swapBytes(&wrd);

    return EXIT_SUCCESS;
}

void swapBytes(uint16_t *word)
{
    union Swap S;
    uint8_t temp = S.B.bit1;
    S.B.bit1 = S.B.bit16;
    S.B.bit16 = temp;

    
}
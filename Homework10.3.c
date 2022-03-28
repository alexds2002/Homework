#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define COUNT 100
int clearBit(uint32_t* maskArr, size_t nitems, size_t bit); 
int setBit(uint32_t* maskArr, size_t nitems, size_t bit);
int checkBit(uint32_t* maskArr, size_t len, size_t bit);
int main(){
    int32_t arr = 0;
    clearBit(&arr, 32, 5);
    setBit(&arr, 32, 2);
    checkBit(&arr, 32, 2);
    printf("%d", arr);
    return EXIT_SUCCESS;
}
int checkBit(uint32_t* maskArr, size_t len, size_t bit){
    return !!(*maskArr & (1 << bit));
}
int setBit(uint32_t* maskArr, size_t nitems, size_t bit){
    return *maskArr |= (1 << bit);
}
int clearBit(uint32_t* maskArr, size_t nitems, size_t bit){
    return *maskArr &= (0 << bit);
}
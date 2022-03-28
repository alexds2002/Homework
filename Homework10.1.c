#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
int main(){

    int32_t mask = 0, input;
    scanf("%d", &input);

    for (int i = 0; i < 32; i++)
    {
        printf("%d\n", !!(input & (1 << i)));
    }
    

    return EXIT_SUCCESS;
}
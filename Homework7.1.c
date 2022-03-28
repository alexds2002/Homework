#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int secondMax(const int* arr, size_t n);
int main(){

    int arr[2] = {1, 2};
    printf("%d", secondMax(arr, 2));
    return EXIT_SUCCESS;
}

int secondMax(const int* arr, size_t n){
    if(n <= 1){
        fprintf(stderr, "Too few arguments");
        return -1;
    }
    int max = arr[0];
    int scdMax = arr[1];
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            scdMax = max;
            max = arr[i];
        }
    }
    return scdMax;
}
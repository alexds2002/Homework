#include <stdio.h>
#include <stdlib.h>
unsigned sumArrayDigits(const int* arr, size_t n); //sum and count of numbers

int main(){


    int n, cnt = 0;
    scanf("%d", &n);
    int arr[n];
    while(cnt < n){
        scanf("%d", &arr[cnt]);
        cnt++;

    }
    printf("%u\n", sumArrayDigits(arr, n));
    

    return EXIT_SUCCESS;
}

unsigned sumArrayDigits(const int* arr, size_t n){

    unsigned cnt = 0;
    unsinged sum = 0;
    for (int i = 0; i < n; i++)
    {
        int number = arr[i];
        while(number >= 1){
            sum += number % 10;
            number /= 10;
            cnt++;
        }
    }
    return sum;
}
#include <stdio.h> //not finished
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>


void (*getSorting(char* fname))(void* ,size_t,size_t,int(*)(const void*,const void*));
void swapg(void *a, void* b, size_t size);
int compare(const void* a, const void* b);
void bubbleSort(void* arr, size_t n, size_t size, int (*comp)(const void*,const void*));
int main(){

    const int COUNT = 10;
    getSorting("qsort");

    return EXIT_SUCCESS;
}

void (*getSorting(char* fname))(void*,size_t, size_t,int(*)(const void*,const void*)){
    if(fname == "qsort"){
        qsort(arr, COUNT, sizeof(arr[0]), cpm);
    } else if(fname == "bubble Sort"){

        bubbleSort(arr, 10, sizeof(arr[0]), cpm);
    }
    
}

int compare(const void* a, const void* b){

    return *(int*)a - *(int*)b;

}

void swapg(void *a, void* b, size_t size){
    uint8_t temp[size];
    memmove(temp, a, size);
    memmove(a, b, size);
    memmove(b, temp, size);
}


void bubbleSort(void* arr, size_t n, size_t size, int (*comp)(const void*,const void*)){
   for (int i = 0; i < n-1; i++){
       for (int j = 0; j < (n-i-1) * size; j += size){
           if (comp(arr + j, arr + j + size) < 0){
              swapg(arr + j, arr + j + size, size);
              
           }
       }
   }
}
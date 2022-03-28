#include <stdio.h>
#include <stdlib.h>

#define COUNT 10

void* LinearSearch(const void* key, const void* arr, size_t n, size_t size, int (*comp)(const void* a, const void* b));
int compare(const void* a, const void* b);
int main(){

    int arr[COUNT] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 6;

    LinearSearch(&key, arr, COUNT, sizeof(arr[0]), compare);
    return EXIT_SUCCESS;
}

int compare(const void* a, const void* b){

    return *(int*)a - *(int*)b;
}


void* LinearSearch(const void* key, void* arr, size_t n, size_t size, int (*comp)(const void* a, const void* b)){

    for (int i = 0; i < n*size; i += size)
    {
        if(comp(key, arr[i]) == 0){
            return *(int*) key;
        }

    }
    
    return -1;
}

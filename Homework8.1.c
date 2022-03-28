#include <stdio.h> //not finished
#include <stdlib.h>
#include <inttypes.h>
#include <time.h>
#include <string.h>

#define COUNT 10

int compare1(const void*a, const void*b);
void BubbleSort(const void* arr, size_t elementsCount, size_t sizeOfElements, int(*cmp)(const void*,const void*));
int swapg(const void*a, const void* b, size_t size);

typedef struct {
    char title[20];
    uint16_t pages;
    double price;
} Book;

int main(){
    srand(time(NULL));
    Book books[COUNT];

    for (int i = 0; i < COUNT; i++)
    {
        books[i].pages = 5 + (rand() % 2000);
        books[i].price = 1.0 + (rand() / RAND_MAX * 999);
    }
    


    return EXIT_SUCCESS;
}

void BubbleSort(const void* arr, size_t elementsCount, size_t sizeOfElements, int(*cmp)(const void*,const void*)){

    for (int i = 0; i < COUNT - 1; i++)
    {
        for (int j = 0; j < COUNT - 1 - i; j++)
        {
            if(cmp((arr[j]->pages, arr[j + 1]) > 0){
                swapg(&arr[j], &arr[j + 1], sizeof(arr[j]));
            }
        }
        
    }
    
}

int swapg(const void*a, const void* b, size_t size){
    void* temp = malloc(size);

    memcpy(temp, a, size);

    memcpy(a, b, size);

    memcpy(b, temp, size);

    free(temp);
}

int compare1(const void*a, const void*b){

    return *(int*)a - *(int*)b;
}
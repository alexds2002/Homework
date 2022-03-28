#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <time.h>
#include <string.h>
#include <math.h>
int compareModel1(const void *, const void *);
int compareModel2(const void *, const void *);
int comparePrice1(const void *a, const void *b);
int comparePrice2(const void *a, const void *b);
int compareMaxSpeed1(const void *a, const void *b);
int compareMaxSpeed2(const void *a, const void *b);

#define COUNT 10
typedef struct
{
    char model[20];
    int8_t maxspeed;
    double price;
} Car;
int main()
{
    srand(time(NULL));
    Car cars[COUNT];
    const char modelNames[7][20] = {"Amodel", "Bmodel", "Cmodel", "Dmodel", "Emodel", "Fmodel", "Gmodel"};
    for (int i = 0; i < COUNT; i++)
    {
        strcpy(cars[i].model, modelNames[rand() % 7]);
    }

    char carNames[COUNT][20];
    for (int i = 0; i < COUNT; i++)
    {
        strcpy(carNames[i], modelNames[rand() % 7]);
        cars[i].price = 1.0 + (double)(rand() % 1000);
    }
    qsort(cars->maxspeed, COUNT, 20, compareMaxSpeed);
    qsort(cars->price, COUNT, 20, comparePrice);
    qsort(carNames, COUNT, 20, compareModel2);
    qsort(carNames, COUNT, 20, compareModel1);
    for (int i = 0; i < COUNT; i++)
    {
        printf("%s\n", carNames[i]);
    }

    return EXIT_SUCCESS;
}

int compareModel1(const void *a, const void *b)
{

    return *(int *)a - *(int *)b;
}

int compareModel2(const void *a, const void *b)
{

    return *(int *)b - *(int *)a;
}
int comparePrice1(const void *a, const void *b)
{

    if (*(double *)a - *(double *)b == __DBL_EPSILON__)
    {
        return 0;
    }
    else
    {
        return *(double *)a - *(double *)b;
    }
}
int comparePrice2(const void *a, const void *b)
{

    if (*(double *)a - *(double *)b == __DBL_EPSILON__)
    {
        return 0;
    }
    else
    {
        return *(double *)a - *(double *)b;
    }
}
int compareMaxSpeed1(const void *a, const void *b)
{
    return *(int8_t *)b - *(int8_t *)a;
}
int compareMaxSpeed2(const void *a, const void *b)
{
    return *(int8_t *)b - *(int8_t *)a;
}
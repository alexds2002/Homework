#include <stdio.h>
#include <stdlib.h>
double sumArray(const double* arr, size_t n, double(*)(const double*,size_t));
double Sum(const double*, size_t);
int main(){


    int n, cnt = 0;
    scanf("%d", &n);
    double arr[n];
    while(cnt < n){
        scanf("%lf", &arr[cnt]);
        cnt++;

    }
    printf("%lf\n", sumArray(arr, n, Sum));
    

    return EXIT_SUCCESS;
}

double sumArray(const double* arr, size_t n, double(*sum)(const double*,size_t)){
    int result = sum(arr, n);
    return result;
    
}
double Sum(const double* arr, size_t n){

    double sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
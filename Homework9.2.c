#include <stdio.h>

int recursiveFind(int* arr, int n, int startPosition);
int checkSum(int a);
int main(){

    int n, cnt = 0;
    scanf("%d", &n);

    int arr[n];
    
    while (n > cnt) 
    {
        scanf("%d", &arr[cnt++]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }
    
    printf("%d\n", recursiveFind(arr, n, 4));
    return 0;
}

int recursiveFind(int* arr, int n, int startPosition){
    static int count = 0;
    if(count > 20){
        return count;
    }
    if(startPosition > n || startPosition < 0){
        
        return count;
    }
    count ++;
    if(checkSum(arr[startPosition]) % 2 == 0){
        recursiveFind(arr, n, startPosition + 3);
    }else{
        recursiveFind(arr, n, startPosition -2);
    }

}
int checkSum(int a){
    int sum = 0;
    while (a >= 1)
    {
        sum += a % 10;
        a /= 10;
        
    }
    return sum;
}
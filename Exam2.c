
#include <stdio.h> 
#include <string.h>
#include <inttypes.h>
#include <stdlib.h>
#include <math.h>


int main(){

    char symbols[] = {'!', '#', '/', '~', '=', '`', '\\', '>', '.', ','};
    long long int input;
    scanf("%lli", &input);
    int remainder;
    long long int reverse = 0;
    long long int n = input;
    if(n < 0){
        n = abs(n);
    }
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    
    int cnt = 0;
    while(reverse != 0){
        if (cnt % 2 == 0)       
        {
            printf("%c", (char)((reverse % 10) + 65));
            reverse /= 10;
        }
        // else{
        //     printf("%c\n", symbols[reverse % 10]);
        //     reverse /= 10;
        // }
        
        cnt++;
    }

}
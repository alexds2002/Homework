#include <stdio.h>
#include <stdlib.h>
int main() {
    unsigned number;
    double root = 1;
    int i = 0;
    
    printf("Enter a positive Number: ");
    scanf("%u",&number);
    while (1)
    {
        i = i + 1;
        root = (number / root + root) / 2;
        if (i == number + 1) { 
            break; 
        }
    }
    
     printf("%.2f",root);

     return EXIT_SUCCESS;
}
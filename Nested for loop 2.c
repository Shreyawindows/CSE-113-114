#include<stdio.h>
int main()
{
    int row = 4,i,j;
    printf("Pattern Printing using nested for loop");
    for(i = 1; i <= row; i++){
        printf("\n");
        for(j = 1; j <= i; j++){
            printf("*");
        }
    }
    return 0;
}

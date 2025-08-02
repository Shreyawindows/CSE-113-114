#include<stdio.h>
int main()
{
    int row = 5,i,j;
    printf("Pattern Printing using Nested for loop");
    for(i = 1; i <= row; i++){
        printf("\n");
        for(j = 1; j <= i; j++){
            printf("%d",j);
        }
    }
    return 0;

}

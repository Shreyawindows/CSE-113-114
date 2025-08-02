#include<stdio.h>
int main()
{
    int space,rows = 4,num,i;
    printf("Pattern printing using nested for loop");
    printf("\n");
    for(i = 1; i <= rows; i++){
        for(space = 1; space <= rows - i; space++){
            printf(" ");
        }
        for(num = 1; num <= 2 * i - 1; num++){
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}

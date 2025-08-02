#include<stdio.h>
int main()
{
    int space,rows = 8,num,i;
    printf("Pattern printing using nested for loop");
    printf("\n");
    for(i = 0; i <= rows; i++){
        for(space = 0; space <= rows - i; space++){
            printf(" ");
        }
        num = 1;
        for(space = 0; space <= i; space++){
            printf("%4d", num);
            num = num * (i - space) / (space + 1);
        }
        printf("\n");
    }
    return 0;
}

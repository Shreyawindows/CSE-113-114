#include<stdio.h>
int main()
{
    int space,rows = 5,star,i;
    printf("Pattern printing using nested for loop");
    printf("\n");
    for(i = 1; i <= rows; i++){
        for(space = 1; space <= rows - i; space++){
            printf(" ");
        }
        for(star = 1; star <= 2 * i - 1; star++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

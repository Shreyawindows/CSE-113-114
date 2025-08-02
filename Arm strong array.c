#include<stdio.h>
int main()
{
    int a[3], i, sum = 0;
    printf("Enter 3 digits:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 3; i++)
    {
        sum = sum + (a[i] * a[i] * a[i]);
    }
    if(sum == (a[0] * 100 + a[1] * 10 + a[2]))
    {
        printf("Number is Armstrong:\n");
    }
    else
    {
        printf("Number is not Armstrong:\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a[5], i;
    printf("Enter 5 digits:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    if(a[0] == a[4] && a[1] == a[3])
    {
        printf("Number is palindrome:\n");
    }
    else
    {
        printf("Number is not palindrome:\n");
    }
    return 0;

}

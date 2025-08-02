#include<stdio.h>
int main()
{
    int num = 23,b = 0;
    while(num != 0)
    {
        b += num % 10;
        num = num / 10;
    }
    printf("result = %d", b);
    return 0;
}

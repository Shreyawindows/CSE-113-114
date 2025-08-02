#include<stdio.h>
#include<math.h>
int main()
{
    int i,s = 0,n;
    printf("Enter the value for n : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        s = s + pow(i,i);
    }
    printf("Sum is = %d",s);
    return 0;
}

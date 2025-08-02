#include<stdio.h>
#include<math.h>
int main()
{
    int i,s = 0,n;
    printf("Enter the value for n : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        s = s + pow(i,2);

    }
    printf("sum is = %d",s);
    return 0;

}

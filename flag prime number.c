#include<stdio.h>
#include<math.h>
int main()
{
    int i = 2, num, flag = 0;
    printf("Enter any number to check for prime:");
    scanf("%d",& num);
    while(i <= ceil(sqrt(num)))
    {
        if(num % i == 0)
        {
            flag++;
            break;
        }
        i++;
    }
    if(flag == 0 && num != 1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    return 0;
}

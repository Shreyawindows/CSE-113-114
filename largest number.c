#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter the value for A,B,C:");
    scanf("%d%d%d",&A,&B,&C);
    if(A > B && A > C){
        printf("A is biggest");
    }
    else if(B > A && B > C){
        printf("B is biggest");
    }
    else{
        printf("C is biggest");
    }
    return 0;
}

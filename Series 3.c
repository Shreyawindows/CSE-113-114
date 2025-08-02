#include <stdio.h>

int main(){
    int a = 2, b = 3, next, n, i;

    printf("Enter the total numbers you want : ");
    scanf("%d", &n);
    printf("The series will be : \n");
    scanf("%d%d", 2, 3);
    for(i = 2; i < n; i++) {
        next = a*b;
        printf("%d", next);
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}

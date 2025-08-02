//heart shape

#include <stdio.h>

int main(){
    int i, j;
    int n = 6;
    for (i = 1; i <= n - 1; i += 2) {
        for (j = 1; j < n - i; j += 2)
        printf("  ");
        for (j = 1; j <= i; j++)
        printf("* ");
        for (j = 1; j <= n - i - 1; j++)
        printf("  ");
        for (j = 1; j <= i; j++)
        printf("* ");
    printf("\n");
    }
    for (i = n; i >= 2; i--) {
        for (j = 1; j <= n - i; j++)
        printf("  ");
        for(j = 1; j <= (i * 2) - 2; j++)
        printf("* ");
    printf("\n");
    }
    for (j = 1; j <= n; j++)
    printf(" ");
    printf("   *\n");

    return 0;
}

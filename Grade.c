#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avg, n1, n2, n3, n4;
    printf("Enter 4 numbers :");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    avg = (n1 + n2 + n3 +n4) / 4;
    printf("Average number is : %f", avg);

    if (avg >= 80 && avg <= 100) {
        printf("Grade A+ \n");
    } else if (avg <= 79 && avg >= 75) {
        printf("Grade A \n");
    } else if(avg <= 74 && avg >= 70) {
        printf("Grade A \n");
    } else if (avg <= 69 && avg >= 65) {
        printf("Grade B+ \n");
    } else if (avg <= 64 && avg >= 60) {
        printf("Grade B \n");
    } else if (avg <= 59 && avg >= 55) {
        printf("Grade B- \n");
    } else if (avg <= 54 && avg >= 50) {
        printf("Grade C+ \n");
    } else if (avg <= 49 && avg >= 45) {
        printf("Grade C \n");
    } else if (avg <= 44 && avg >=40) {
        printf("Grade D \n");
    } else if (avg < 40) {
        printf("Grade F \n");
    } else
           printf("Inputted numbers are not valid \n");


    return 0;
}

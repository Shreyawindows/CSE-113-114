#include<stdio.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
    int pages;
};
int main()
{
    struct Book b;
    printf("Enter book title:");
    gets(b.title);
    printf("Enter author name:");
    gets(b.author);
    printf("Enter price:");
    scanf("%f",& b.price);
    printf("Enter number of pages:");
    scanf("%d",& b.pages);
    printf("\n---Book Information---\n");
    printf("Title:%s\n", b.title);
    printf("Author:%s\n", b.author);
    printf("Price:%.2f\n", b.price);
    printf("Pages:%d\n", b.pages);
    return 0;
}

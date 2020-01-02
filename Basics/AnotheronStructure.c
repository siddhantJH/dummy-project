#include <stdio.h>
#include <stdlib.h>
#include <String.h>

struct book
{
    int bookid;
    char title[20];
    float price;

};
struct book input()
{
    struct book b1;
    printf("Enter Book ID,Title,Price:\n");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    return(b1);

};
void display(struct book b)
{
printf("%d\n",b.bookid);
printf("%s\n",b.title);
printf("%f",b.price);
}
void main()
{
    struct book info;
    info=input();
    display(info);
}

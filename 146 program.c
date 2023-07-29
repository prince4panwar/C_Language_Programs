//Define a structure book with bookid, title and price as member variables.
#include<stdio.h>
#include<string.h>
struct book
    {
        int bookid;
        char a[10];
        float price;
    };
void main()
{
    struct book b;
    printf("Enter bookid, title and price of book\n");
    printf("Enter bookid :- ");
    scanf("%d",&b.bookid);
    printf("Enter title :- ");
    fflush(stdin);
    gets(b.a);
    printf("Enter price :- ");
    scanf("%f",&b.price);
    printf("%d\n",b.bookid);
    printf("%s\n",b.a);
    printf("%f\n",b.price);
}

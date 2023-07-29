//Write a program to convert a string into uppercase by using strupr function
#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter a string :- ");
    gets(str);
    printf("%s",strupr(str));
}

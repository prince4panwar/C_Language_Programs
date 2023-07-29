//Write a program to reverse a string by using strrev function
#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter a string :- ");
    gets(str);
    printf("%s",strrev(str));
    getch();
}


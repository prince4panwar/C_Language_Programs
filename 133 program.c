//Write a Program to convert string into lowercase by using strlwr function
#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter a string :- ");
    gets(str);
    printf("%s",strlwr(str));
}


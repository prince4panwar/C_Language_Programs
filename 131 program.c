//Write a program to reverse a string without using strrev function.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[20],t;
    int i,l;
    printf("Enter a string :- ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        t=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=t;
    }
    printf("Reverse of the given string is %s",str);
    getch();
}

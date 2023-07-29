//Write a function to count occurrence of a given character in a given string
#include<stdio.h>
#include<string.h>
int count(char str[],char a,int l);
void main()
{
    char str[30],a;
    int l,n;
    printf("Enter a string    :- ");
    gets(str);
    printf("Enter a character :- ");
    scanf("%c",&a);
    l=strlen(str);
    n=count(str,a,l);
    printf("Number of %c in %s is %d",a,str,n);
    getch();
}
int count(char str[],char a,int l)
{
    int i,n=0;
    for(i=0;i<l;i++)
    if(str[i]==a)
        n++;
    return n;
}

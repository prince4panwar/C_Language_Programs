//Write a function to check whether a given string is alphanumeric or not.
#include<stdio.h>
#include<string.h>
void alphanumeric(char str[]);
void main()
{
    char str[20];
    printf("Enter a string :- ");
    gets(str);
    alphanumeric(str);
    getch();
}
void alphanumeric(char str[])
{
    int i,a=0,b=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            a++;
        if(str[i]>='0'&&str[i]<='9')
            b++;
    }
        if(a>0&&b>0)
            printf("%s string is alphanumeric",str);
        else
            printf("%s string is not alphanumeric",str);
}

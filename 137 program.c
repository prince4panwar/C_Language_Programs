//Write a function to capitalize a string
#include<stdio.h>
#include<string.h>
void capital(char str[]);
void main()
{
    char str[100];
    printf("Enter a string :- ");
    gets(str);
    capital(str);
    getch();
}
void capital(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
      if(str[0]>='a'&&str[0]<='z')
      str[0]=str[0]-32;
      if(str[i]==' ')
      str[i+1]=str[i+1]-32;
    }
    printf("%s",str);
}

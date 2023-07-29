//Write a function to count vowels in a given string.
#include<stdio.h>
#include<string.h>
int vowels(char str[],int l);
void main()
{
  char str[20];
  int l,n;
  printf("Enter a string to count number of vowels in it :- ");
  gets(str);
  l=strlen(str);
  n=vowels(str,l);
  printf("Number of vowels in %s is %d",str,n);
  getch();
}
int vowels(char str[],int l)
{
    int i,n=0;
    for(i=0;i<l;i++)
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        n++;
    return n;
}

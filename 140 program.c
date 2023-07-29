//Write a function t check whether a given string is palindrome or not
#include<stdio.h>
#include<string.h>
palindrome(char str[], int n);
void main()
{
    int n;
    char str[10];
    printf("Enter a string :- ");
    gets(str);
    for(n=0;str[n];n++);
    palindrome(str,n);
}
palindrome(char str[], int n)
{
    int i,t,l;
    char a[10];
    strcpy(a,str);
    for(i=0;i<n/2;i++)
    {
        t=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=t;
    }
    l=strcmp(a,str);
    if(l==0)
        printf("%s is Palindrome",a);
    else
        printf("%s is Non Palindrome",a);

}

/*Write a program to count vowels in each of the string.
when 8 string are stored in a two dimensional char array.
Also print the total number of vowels.*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[8][20];
    int i,j,count=0,sum=0;
    printf("Enter 8 string :- \n");
    for(j=0;j<8;j++)
    gets(str[j]);
    for(j=0;j<8;j++)
    {
       for(i=0;str[j][i];i++)
       if(str[j][i]=='a'||str[j][i]=='e'||str[j][i]=='i'||str[j][i]=='o'||str[j][i]=='u'||str[j][i]=='A'||str[j][i]=='E'||str[j][i]=='I'||str[j][i]=='O'||str[j][i]=='U')
       count++;
       sum=sum+count;
       printf("Vowels in String %d is %d\n",j+1,count);
       count=0;
    }
    printf("\nTotal numbers of vowels in 8 strings is %d",sum);
    getch();
}

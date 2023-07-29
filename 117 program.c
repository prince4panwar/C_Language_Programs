//Write a program to sort an array of size 10
#include<stdio.h>
void main()
{
    int a[10],i,r,t;
    printf("Enter a number :- \n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    printf("\n\n");
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
       {
          if(a[i]>a[i+1])
          {
            t=a[i+1];
            a[i+1]=a[i];
            a[i]=t;
          }
       }
    }
    getch();
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);

}


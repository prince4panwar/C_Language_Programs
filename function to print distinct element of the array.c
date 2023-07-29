//Write a function to print distinct element of a given array
#include<stdio.h>
void distinct(int a[], int n);
void main()
{
    int a[10],n,i;
    printf("Enter size of an array :- ");
    scanf("%d",&n);
    printf("Enter numbers for an array :- \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    distinct(a,n);
    getch();
}
void distinct(int a[], int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        if(a[i]==a[j+1])
        {
        t=a[j+1];
        a[j+1]=a[n-1-i];
        a[n-1-i]=t;
        }
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}



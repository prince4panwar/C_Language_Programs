//Write a function to print frequency of each element of the array
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
    int i,count=0,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        if(a[i]==a[j])
        count++;
    printf("%d - %d\n",a[i],count);
    count=0;
    }
}

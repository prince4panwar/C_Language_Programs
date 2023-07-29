//Write a function to sort an array of size n.
void main()
{
    int a[100],i,n;
    printf("Enter a size of an array :- ");
    scanf("%d",&n);
    printf("Enter %d numbers :- \n",n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    printf("%d ",a[i]);
    sort(a,n);
    printf("\n");
    for(i=0;i<=n-1;i++)
    printf("%d ",a[i]);
    getch();
}
sort(int a[], int n)
{
    int r,i,t;
    for(r=0;r<n;r++)
    {
        for(i=r+1;i<n;i++)
        {
            if(a[r]>a[i])
            {
               t=a[r];
               a[r]=a[i];
               a[i]=t;
            }
        }

    }
}


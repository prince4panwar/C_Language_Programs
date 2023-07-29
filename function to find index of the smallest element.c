//Write a function to find the index of the smallest element of an array.
int index(int a[],int n);
void main()
{
    int a[100],i,n,l;
    printf("Enter a size of an array :- ");
    scanf("%d",&n);
    printf("Enter numbers :- \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    l=index(a,n);
    printf("\nIndex of smallest element of an given array is %d",l);
    getch();
}
int index(int a[],int n)
{
    int min=a[0],i;
    for(i=0;i<n;i++)
        if(min>a[i])
            min=a[i];
    for(i=0;i<n;i++)
        if(a[i]==min)
        return i;
}

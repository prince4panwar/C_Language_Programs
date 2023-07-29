//Write a function to find the index of the smallest element of an array of size n.
void input(int a[]);
int display(int a[]);
void index(int a[],int n);
void main()
{
    int a[100],n;
    input(a);
    n=display(a);
    index(a,n);
    getch();
}
void input(int a[])
{
   int i,n;
   printf("Enter size of an array :- ");
   scanf("%d",&n);
   printf("Enter %d numbers :- \n",n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
}
int display(int a[])
{
    int i,n;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    return n;
}
void index(int a[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
      if(a[i]<a[i+1])
      {
          printf("%d ",i);
      }
    }
}

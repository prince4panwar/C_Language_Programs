//Write a function to rotate an array towards right by one position.
void rotate(int a[],int size);
main()
{
    int a[10],i;
    printf("Enter 10 number :- \n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    printf("\n");
        rotate(a,10);
    printf("\n");
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    getch();
}
void rotate(int a[],int size)
{
   int i,t;
   for(i=size-1;i>=1;i--)
   {
     if(i!=0)
     {
        t=a[i];
        a[i]=a[i-1];
        a[i-1]=t;
     }
   }
}


//Write a function to reverse an array.
reverse(int a[],int size);
main()
{
    int a[100],i,size;
    printf("Enter size of an array :- ");
    scanf("%d",&size);

    printf("Enter %d number :- \n",size);
    for(i=0;i<=size-1;i++)
    scanf("%d",&a[i]);

    printf("\n");
    for(i=0;i<=size-1;i++)
    printf("%d ",a[i]);

    printf("\n");
        reverse(a,size);
    printf("\n");

    for(i=0;i<=size-1;i++)
    printf("%d ",a[i]);
    getch();
}
reverse(int a[],int size)
{
    int i,t;
    for(i=0;i<=size-1;i++)
    {
        if(i<=(size-1)/2)
        {
            t=a[i];
            a[i]=a[size-1-i];
            a[size-1-i]=t;
        }
    }
}

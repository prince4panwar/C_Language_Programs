//Write a program to rotate an array towards right by one position.
main()
{
    int a[10],i,t;
    printf("Enter 10 number :- \n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    printf("\n");
  for(i=9;i>=1;i--)
  {
    if(i!=0)
    {
        t=a[i];
        a[i]=a[i-1];
        a[i-1]=t;
    }
  }
   printf("\n");
   printf("By rotating an array towards right by one position\n\n");
   for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    getch();
}

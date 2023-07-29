//Write a program to calculate sum of 10 numbers stored in an arrays.
main()
{
    int a[10],i,s=0;
    printf("Enter ten number :- \n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    s=s+a[i];
    printf("Sum of ten number is %d",s);
    getch();
}

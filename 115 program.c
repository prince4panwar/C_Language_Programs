//Write a program to find the greatest element in array of size 10
main()
{
    int a[10],i,max;
    printf("Enter 10 numbers :- \n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<=9;i++)
    if(a[i]>max)
    max=a[i];
    printf("Greatest number among ten numbers is %d",max);
    getch();
}

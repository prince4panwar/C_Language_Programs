//Write a program to find the smallest element in array of size 10
main()
{
    int a[10],i,min;
    printf("Enter 10 numbers :- \n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<=9;i++)
    if(min>a[i])
    min=a[i];
    printf("Smallest number among ten numbers is %d",min);
    getch();
}


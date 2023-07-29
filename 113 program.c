//Write a program to calculate average of 10 number s. Use array to store 10 numbers
main()
{
    int a[10],i;
    float s;
    printf("Enter 10 numbers :- \n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    s=s+a[i];
    printf("Average of 10 numbers is %f",s/10);

}

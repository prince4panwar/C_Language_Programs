//Write a program to calculate sum of all even and sum of all odd numbers stored in an array
main()
{
    int a[10],i,sume=0,sumo=0;
    printf("Enter 10 numbers :- \n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
    if(a[i]%2==0)
        sume=sume+a[i];
    else
        sumo=sumo+a[i];
    }
    printf("Sum of even numbers is %d\n",sume);
    printf("Sum of odd numbers is %d",sumo);

}

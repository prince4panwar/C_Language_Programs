//Write a program to print Sum of squares of first N natural numbers
main()
{
    int a=1,b;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("Sum of squares of first N natural numbers\n");
    while(a<=b)
    {
        printf("%d*%d = %d\n",a,a,a*a);
        a++;
    }
}

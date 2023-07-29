//Write a program to print first N terms of a Fibonacci series
main()
{
    int a=-1,b=1,e,c,d;
    printf("Enter a number :- ");
    scanf("%d",&c);
    printf("\nFirst %d terms of a Fibonacci series is given below\n\n",c);
    while(1<=c)
    {
        e=a+b;
        a=b;
        b=e;
        printf("%d ",e);
        c--;
    }
    getch();

}

//Write a program to print first N terms of a Fibonacci series
main()
{
    int a=-1,b=1,e,c,d;
    printf("Enter a number :- ");
    scanf("%d",&c);
    printf("\n%dth term of a Fibonacci series is ",c);
    while(1<=c)
    {
        e=a+b;
        a=b;
        b=e;
        c--;
    }
    printf("%d ",e);
    getch();

}


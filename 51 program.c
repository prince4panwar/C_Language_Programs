//Write a program to check whether a given number is a term in Fibonacci series
main()
{
    int a=-1,b=1,c,d,e,f=50;
    printf("Enter a number :- ");
    scanf("%d",&c);
    while(1<=f)
    {
        e=a+b;
        if(c==e)
        {
            printf("\nYes, the number %d is a term of Fibonacci series",c);
            break;
        }
        a=b;
        b=e;
        f--;


    }
    if(c!=e)
    {
        printf("No, the number %d is not a term of Fibonacci series",c);
    }
    getch();
}

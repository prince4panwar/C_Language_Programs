//Write a function check whether a given number is even or odd. (TSRS). (Return 1 if even otherwise Return 0)
int fun(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}
int fun(int);
    main()
    {
        int a,b;
        printf("Enter a number :- ");
        scanf("%d",&a);
        b=fun(a);
        printf("%d",b);

    }

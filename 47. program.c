//Write a program to calculate sum of digits of a given number
main()
{
    int a,c=0,b,d;
    printf("Enter a number :- ");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b=a%10;
        c=b+c;
        a=a/10;

    }
    printf("Sum of digits of %d is %d",d,c);
    getch();
}





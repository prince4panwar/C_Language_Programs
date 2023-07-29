//Write a program to check whether a given number is Prime or not
main()
{
    int n,a=2,b;
    printf("Enter a number :- ");
    scanf("%d",&n);
    while(a>=2&&a<=99)
    {
       b=n%a;
       if(b==0&&a!=n)
       {
           break;
       }
       a++;
    }
    if(b!=0)
    {
       printf("\n%d is a Prime number",n);
    }
    else
    {
       printf("\n%d is a not Prime number",n);
    }
    getch();
}

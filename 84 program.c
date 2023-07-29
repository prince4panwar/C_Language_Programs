/*Write a function to calculate number of combination which can be made from n items,
selected r at a time. (TSRS) */
int com(int,int);
main()
{
    int a,b,c;
    printf("Number of objects(n) must be greater than number of choosed objects(r) (n>r)\n");
    printf("Enter number of objects (n)       :- ");
    scanf("%d",&a);
    printf("Enter choosing of objects(r)      :- ");
    scanf("%d",&b);
    if(a<b)
    {
       printf("Invalid input \n n must be greater than r (n>r)");
       exit(0);
    }
    c=com(a,b);
    printf("Number of combination C(%d,%d) is %d",a,b,c);
    getch();
}
int com(int x,int y)
{
    int z=1,a,b,c=1,d,e=1,f;
     b=x-y;
    for(a=1;a<=x;x--)
    z=z*x;
    for(a=1;a<=y;y--)
    e=e*y;
    for(a=1;a<=b;b--)
    c=c*b;
    f=c*e;
    d=z/f;

    return d;
}


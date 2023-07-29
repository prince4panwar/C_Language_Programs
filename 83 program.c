/*Write a function to calculate number of permutations which can be made from n items,
selected r at a time. (TSRS) */
int per(int,int);
main()
{
    int a,b,c;
    printf("Number of objects(n) must be greater than number of selected objects(r) (n>r)\n");
    printf("Enter number objects (n)       :- ");
    scanf("%d",&a);
    printf("Enter selection of objects(r)  :- ");
    scanf("%d",&b);
    if(a<b)
    {
       printf("Invalid input \n n must be greater than r (n>r)");
       exit(0);
    }
    c=per(a,b);
    printf("Number of Permutations P(%d,%d) is %d",a,b,c);
    getch();
}
int per(int x,int y)
{
    int z=1,a,b,c=1,d,e;
     b=x-y;
    for(a=1;a<=x;x--)
    z=z*x;
    for(e=1;e<=b;b--)
    c=c*b;
    d=z/c;
    return d;
}

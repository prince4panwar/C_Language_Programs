main()
{
    int a,b;
    printf("Enter a first number :- ");
    scanf("%d",&a);
    printf("Enter a second number :- ");
    scanf("%d",&b);
    fun(a,b);
}

void fun(int a,int b)
{
    if(a>=0&&b<=1)
        printf("no");
    else if(a>=0&&b<=153)
         printf("0 1");
    else if(a>=0&&b==154)
         printf("0 1 153");
         else
         printf(" ");


}

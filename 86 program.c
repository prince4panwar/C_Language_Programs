//Write a function to print all Prime numbers between two given numbers. (TSRN)
void fun(int, int);
main()
{
    int a,b;
    printf("Enter a first number  :- ");
    scanf("%d",&a);
    printf("Enter a second number :- ");
    scanf("%d",&b);
    fun(a,b);
    getch();
}

void fun(int x, int y)
{
    int z;
    printf("\nPrime number between %d and %d is given below\n\n",x,y);
    if(x<1)
    x=1;
    x++;
    y--;
    for(x;x<=y;x++)
    {
        for(z=2;z<=99;z++)
       {
        if(x%z==0&&x!=z)
        break;
       }
        if(x%z!=0)
        printf("%d ",x);
    }
}

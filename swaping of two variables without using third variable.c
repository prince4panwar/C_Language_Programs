main()
{
    int a,b,i;
    for(i=0;i<=10;i++)
    {
    printf("\nEnter two numbers\n");
    printf("\nEnter first number  :-");
    scanf("%d",&a);
    printf("\nEnter second number :-");
    scanf("%d",&b);
    printf("\na=%d & b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nEnter for swapping of a & b\n");
    getch();
    printf("\na=%d & b=%d\n",a,b);
    getch();
    }
}

//Write a program to print Sum of the first N natural numbers
main()
{
    int a=1,b,c=0;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("\n");
    printf("Sum of the first N natural numbers\n\n");
    while(a<=b)
    {
        c=a+c;
        printf("%d",a);
        a++;
        if(a<=b)
        {
        printf(" + ");
        }
    }
    printf(" = %d",c);
    getch();
}

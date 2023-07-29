//Write a program to print Sum of the squares of first %d natural numbers
main()
{
    int a=1,b,c=0;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("Sum of the squares of first %d natural numbers\n\n",b);
    while(a<=b)
    {
        c=a*a+c;
        printf("%d*%d",a,a);
        a++;
        if(a<=b)
        {
            printf(" + ");
        }

    }
    printf(" = %d",c);

    getch();
}

main()
{
    int a=1,b;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("Press enter for reversing first %d odd natural numbers",b);
    getch();
    printf("\nFirst %d odd natural numbers is given below\n\n",b);
    b=2*b-1;
    while(a<=b)
    {
        printf("%d\n",b);
        b-=2;
    }
}

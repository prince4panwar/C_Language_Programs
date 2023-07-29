main()
{
    int a=1,b;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("\nFirst %d odd natural number is given below\n\n",b);
    b=2*b;
    while(a<=b)
    {
        printf("%d\n",a);
        a+=2;
    }
}

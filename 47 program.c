//write a program to reverse a number
main()
{
    int a,b;
    printf("Enter a number :- ");
    scanf("%d",&a);
    printf("Reverse of number %d is ",a);
    while(a!=0)
    {
        b=a%10;
        printf("%d",b);
        a=a/10;
    }
    getch();
}

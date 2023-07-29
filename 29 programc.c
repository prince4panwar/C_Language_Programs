//Write a program to print first N natural numbers in reverse order
main()
{
    int a=1,b;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("First N natural numbers in reverse order\n");
    while(a<=b)
    {
        printf("%d\n",b);
        b--;
    }
    getch();
}

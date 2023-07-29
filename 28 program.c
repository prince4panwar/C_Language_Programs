//Write a program to print first N natural numbers
main()
{
    int a=1, b;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("First N natural numbers \n");
    while(a<=b)
    {
        printf("%d\n",a);
        a++;
    }
    getch();
}

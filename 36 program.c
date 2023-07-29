//Write a program to print First N odd natural numbers
main()
{
    int a=1,b;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("First N odd natural numbers\n");
    while(a<=b)
    {
        printf("%d\n",a);
        a+=2;
    }
    getch();
}

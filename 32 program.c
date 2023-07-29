//Write a program to print first N Even natural numbers
main()
{
    int a=2,b;
    printf("Enter a number");
    scanf("%d",&b);
    printf("First N Even natural numbers\n");

    while(a<=2*b)
    {
        printf("%d\n",a);
        a+=2;
    }




    getch();
}

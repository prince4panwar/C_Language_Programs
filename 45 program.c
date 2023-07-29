//Write a program to count digits in a given number
main()
{
    int a=0,b;
    printf("Enter a number :- ");
    scanf("%d",&b);
    while(b!=0)
    {
        b=b/10;
        a++;
    }
    printf("%d",a);
    getch();
}

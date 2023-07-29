//Write a program to print table of user's choice
main()
{
    int a=1,b;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("\n\Table of %d is given below\n\n",b);
    while(a<=10)
    {
        printf("%d x %d = %d\n",b,a,a*b);
        a++;
    }
    getch();
}

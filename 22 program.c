//Write a program to check whether a given number is positive, negative or zero
main()
{
    int a;
    printf("Enter a number :- ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("\n%d is a positive number\n",a);
    }
    else if(a==0)
    {
        printf("\n%d is zero\n",a);
    }
   else
    {
        printf("\n%d is a negative number\n",a);
    }
    getch();
}

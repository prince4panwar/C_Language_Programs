//Write a function to print first N even natural number. (Take Something Return Nothing)
void even(int a)
{
    for(int b=2;b<=2*a;b+=2)
    {
        printf("%d\n",b);
    }
}
void even(int);
main()
{
    int i;
    printf("Enter a number :- ");
    scanf("%d",&i);
    even(i);
    getch();
}

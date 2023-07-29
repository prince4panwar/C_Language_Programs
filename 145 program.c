//Write a function to swap two numbers.
void swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter a number :- ");
    scanf("%d",&a);
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("a = %d\nb = %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping the two variables by passing address\n");
    printf("a = %d\nb = %d",a,b);
    getch();
}
void swap(int *x,int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
}

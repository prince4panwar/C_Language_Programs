//Write a program to print first N odd natural numbers in reverse order
main()
{
    int a=1,b;
    printf("Enter a number :- ");
    scanf("%d",&b);
    b=2*b;
    printf("First N odd natural numbers in reverse order\n");
    if(b%2==0)
    {

    b=b-1;
    while(a<=b)
    {
        printf("%d\n",b);
        b-=2;
    }

    }

    else
    {

    while(a<=b)
    {
        printf("%d\n",b);
        b-=2;
    }

    }
}


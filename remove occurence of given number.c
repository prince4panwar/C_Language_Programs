//Write a program to function remove all occurrence of a given digit from a given number
void occur(int a, int b);
void main()
{
    int a,b,s;
    printf("Enter a number and digit of that number\n");
    printf("Enter a number :- ");
    scanf("%d",&a);
    printf("Enter a digit  :- ");
    scanf("%d",&b);
    occur(a,b);
}
void occur(int a, int b)
{
    int i,n;
    for(i=1;a>0;i++)
    {
       n=a%10;
       if(n==b)
       {
        a=a/10;
        continue;
       }
       if(n!=b)
       {
           printf("%d ",a%10);
           a=a/10;
       }

    }

}

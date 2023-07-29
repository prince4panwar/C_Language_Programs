/*Write a program to print star pattern
1
12
123
1234
*/
main()
{
    int i,j,k=1,n;
    printf("Enter a number of rows :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            {
                printf("%d",k++);
            }
            else
            {
                printf(" ");
            }

        }
        k=1;
        printf("\n");
    }
}

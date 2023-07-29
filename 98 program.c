/*
Write a program to print star pattern
*******
 *****
  ***
   *
*/
main()
{
    int i,j,n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i&&j<=2*n-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}


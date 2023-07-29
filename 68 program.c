/*Write a program to print star pattern
   *
  **
 ***
****
*/

main()
{
    int i,j,n;
    printf("Enter the number of lines :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {

            if(i<n-j+1)
                printf(" ");
            else
                printf("*");

        }
        printf("\n");
    }
}

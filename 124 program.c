//Two dimensional array
//Write a program to calculate sum of two matrices each of order 3x3
void main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter 9 numbers of first matrix :- \n");
    for(j=0;j<=2;j++)
    for(i=0;i<=2;i++)
    scanf("%d",&a[j][i]);
    printf("\n");
    for(j=0;j<=2;j++)
    {
       for(i=0;i<=2;i++)
       printf("%d ",a[j][i]);
       printf("\n");
    }

    printf("\nEnter 9 numbers of second matrix :- \n");
    for(j=0;j<=2;j++)
    for(i=0;i<=2;i++)
    scanf("%d",&b[j][i]);
    printf("\n");
    for(j=0;j<=2;j++)
    {
       for(i=0;i<=2;i++)
       printf("%d ",b[j][i]);
       printf("\n");
    }
     printf("\nSum of two matrices is given below\n");
    for(j=0;j<=2;j++)
    {
      for(i=0;i<=2;i++)
      printf("%d  ",a[j][i]+b[j][i]);
      printf("\n");
    }
    getch();
}

//Two dimensional array
//Write a program to calculate product of two matrices each of order 3x3
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,sum,k;
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
    for(j=0;j<=2;j++)
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(k=0;k<=2;k++)
            sum=sum+a[j][k]*b[k][i];
            c[j][i]=sum;
    }
    printf("\nProduct of two matrices is given below\n\n");
    for(j=0;j<=2;j++)
    {
       for(i=0;i<=2;i++)
       printf("%d ",c[j][i]);
       printf("\n");
    }




}

/* Write  a program to star pattern
    *
   * *
  * * *
 * * * *          */
 main()
 {
     int i,j,n;
     printf("Enter a number :- ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(j>=i)
                printf("* ");
             else
                printf(" ");
         }
         printf("\n");
     }
 }

//Write a program to print first N prime numbers.
main()
{
   int n,x=2,i;
   printf("Enter a number :- ");
   scanf("%d",&n);
   while(n>0)
   {
      for(i=2;i<x;i++)
      {
        if(x%i==0)
        break;
      }
       if(i==x)
      {
        printf("%d ",x);
        n--;
      }
        x++;
   }
}

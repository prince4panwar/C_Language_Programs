//Write a function to print all Armstrong numbers in the given range
void arm(int,int);
main()
{
    int a,b;
    printf("Enter a number :- ");
    scanf("%d",&a);
    printf("Enter a number :- ");
    scanf("%d",&b);
    arm(a,b);
    getch();
}
void arm(int a, int b)
{
    int x,y,z=1,k,l,sum=0;
    y=a;
    for(y;y<=b;y++)
    {
        a=y;
       for(x=1;a>=10;x++)
       a=a/10;
       a=y;
     for(k=1;a>0;k++)
      {
       l=a%10;
       switch(x)
       {
       case 1:
        l=l;
        break;
       case 2:
        l=l*l;
        break;
       case 3:
        l=l*l*l;
        break;
       case 4:
        l=l*l*l*l;
        break;
       case 5:
        l=l*l*l*l*l;
        break;
       case 6:
        l=l*l*l*l*l*l;
        break;
       case 7:
        l=l*l*l*l*l*l*l;
        break;
       case 8:
        l=l*l*l*l*l*l*l*l;
        break;
       case 9:
        l=l*l*l*l*l*l*l*l*l;
        break;
       case 10:
        l=l*l*l*l*l*l*l*l*l*l;
        break;
      }
       a=a/10;
       sum=sum+l;
    }
      if(sum==y)
      printf("%d",sum);
    }
}

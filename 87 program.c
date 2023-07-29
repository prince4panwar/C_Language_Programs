//Write a function to check whether a given number is an Armstrong or not.
void arm(int);
main()
{
    int a;
    printf("Enter a number :- ");
    scanf("%d",&a);
    arm(a);
    getch();
}
void arm(int i)
{
    int x,y,z=1,k,l,sum=0,a;
    a=i;
    y=i;
    for(x=1;i>=10;x++)
    i=i/10;
    for(k=1;y>0;k++)
      {
       l=y%10;
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
       y=y/10;
       sum=sum+l;
      }
      if(sum==a)
        printf("%d is an Armstrong",a);
      else
        printf("%d is not an Armstrong",a);

}

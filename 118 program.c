//Write a function to sort an array of size 10
void input();
diplay();
void main()
{
    int a[10];
    input(a,10);
    display(a,10);
    sort(a,10);
    display(a,10);
}
void input(int a[],int size)
{
  int i;
  printf("Enter a number :- \n");
  for(i=0;i<=9;i++)
  scanf("%d",&a[i]);
  printf("\n");
}
void display(int a[],int size)
{
    int i;
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    printf("\n\n");
}
void sort(int a[],int size)
{
    int r,i,t;
  for(r=1;r<=9;r++)
  {
      for(i=0;i<=size-1-r;i++)
      {
          if(a[i]>a[i+1])
          {
            t=a[i+1];
            a[i+1]=a[i];
            a[i]=t;
          }
      }
  }

}

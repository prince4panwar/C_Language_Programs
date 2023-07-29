//Write a function to print first N natural numbers. (Take Something Return Nothing)
#include<stdio.h>
void fun(int);
main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    fun(n);

}
void fun(int i)
{
    int a;
   for(a=1;a<=i;a++)
   {
       printf("%d\n",a);
   }
}

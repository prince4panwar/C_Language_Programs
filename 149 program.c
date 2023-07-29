//Write a function to sort an array of employees according to their salaries.
struct employee
{
    char name[10];
    int slr;
};
void input(struct employee);
main()
{
    struct employee b[5];
    input(b);
}
void input(struct employee b[])
{
    int i,j,t;
    for(i=0;i<5;i++)
    {
        printf("Enter a name of employee :- ");
        gets(b[i].name);
        printf("Enter salary of employee :- ");
        scanf("%d",&b[i].slr);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        if(b[i].slr>b[i+1].slr)
        {
          t=b[i].slr;
          b[i].slr=b[i+1].slr;
          b[i+1].slr=t;
        }
        for(i=0;i<5;i++)
            printf("%d",b[i].slr);
    }


}

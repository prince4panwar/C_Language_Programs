
main()
{
    int a,b,c,d,e;
    float sum, per;
    printf("Enter the marks of five subjects\n");
    printf("Enter marks of first subject  :- ");
    scanf("%d",&a);
    printf("Enter marks of second subject :- ");
    scanf("%d",&b);
    printf("Enter marks of third subject  :- ");
    scanf("%d",&c);
    printf("Enter marks of fourth subject :- ");
    scanf("%d",&d);
    printf("Enter marks of fifth subject  :- ");
    scanf("%d",&e);
    sum = a+b+c+d+e;
    per = sum/500*100;

    if(per<=50 && per>=33)
    {
        printf("\nYou have passed the exam\n");
        printf("\nYou got %f percentage\n",per);
        printf("\nYou got third Devision\n");
    }
    if(per<=80 && per>=50)
    {   printf("\nYou have passed the exam\n");
        printf("\nYou got %f percentage\n",per);
        printf("\nYou got second Devision\n");
    }
    if(per<=100 && per>=80)
    {   printf("\nYou have passed the exam\n");
        printf("\nYou got %f percentage\n",per);
        printf("\nYou got first Devision\n");
    }
    if(per<33)
    {
        printf("\nYou got %f percentage\n",per);
        printf("\nYou are fail\n");
    }
    getch();
}

/*Write a program which takes month number as an input and display number of days
 in that month */
main()
{
    int x;
    printf("Enter a month number (1-12) :- ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Number of days in January is 31");
        break;
    case 2:
        printf("Number of days in Febraury is 28");
        break;
    case 3:
        printf("Number of days in March is 31");
        break;
    case 4:
        printf("Number of days in April is 30");
        break;
    case 5:
        printf("Number of days in May is 31");
        break;
    case 6:
        printf("Number of days in June is 30");
        break;
    case 7:
        printf("Number of days in July is 31");
        break;
    case 8:
        printf("Number of days in August is 31");
        break;
    case 9:
        printf("Number of days in September is 30");
        break;
    case 10:
        printf("Number of days in October is 31");
        break;
    case 11:
        printf("Number of days in November is 30");
        break;
    case 12:
        printf("Number of days in December is 31");
        break;
    default:
        printf("Invalid month number\n");
        printf("Please enter valid a month number from 1 to 12");
    }
    getch();
}

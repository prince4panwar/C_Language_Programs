/*Write a program which takes day number of a week and display unique greeting message for the day*/
main()
{
    int x;
    printf("Enter a day number (1-7) :- ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("\nSunday\n");
        printf("\nNamasthe");
        break;
    case 2:
        printf("\nMonday\n");
        printf("\nNice to meet you");
        break;
    case 3:
        printf("\nTuesday\n");
        printf("\nHave a nice day");
        break;
    case 4:
        printf("\nWednesday\n");
        printf("\nBe Positive");
        break;
    case 5:
        printf("\nThursday\n");
        printf("\nStay Happy");
        break;
    case 6:
        printf("\nFriday\n");
        printf("\nEducation is very power weapon");
        break;
    case 7:
        printf("\nSaturday\n");
        printf("\nKeep Enjoying");
        break;
    default :
        printf("\nPlease Enter a day number from 1 to 7");
    }
    getch();
}

/*Write a menu driven program with following option
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
main()
{
    char n;
    float a,b;
    printf("Press a for Addition\n");
    printf("Press b for subtraction\n");
    printf("Press c for Multiplication\n");
    printf("Press d for Division\n");
    printf("Press e for Exit\n\n");
    printf("Enter a Character (a-e) :- ");
    scanf("%c",&n);
    if(n=='a')
        printf("\nYou choose Addition press enter\n\n");
    else if(n=='b')
        printf("\nYou choose Subtraction press enter\n\n");
    else if(n=='c')
        printf("\nYou choose Multiplication press enter\n\n");
    else if(n=='d')
        printf("\nYou choose Division press enter\n\n");
    else
        printf("\nYou choose Exit press enter\n\n");

        getch();

        switch(n)
        {
        case 'a':
            {
                 printf("Enter a first number  :- ");
                 scanf("%f",&a);
                 printf("Enter a second number :- ");
                 scanf("%f",&b);
                 printf("\nAddition of %f and %f is %f",a,b,a+b);
            }

                break;
        case 'b':
            {
                 printf("Enter a first number  :- ");
                 scanf("%f",&a);
                 printf("Enter a second number :- ");
                 scanf("%f",&b);
                 printf("\nSubtraction of %f and %f is %f",a,b,a-b);
            }

                break;
        case 'c':
            {
                 printf("Enter a first number  :- ");
                 scanf("%f",&a);
                 printf("Enter a second number :- ");
                 scanf("%f",&b);
                 printf("\nMultiplication of %f and %f is %f",a,b,a*b);
            }

                break;
        case 'd':
            {
                 printf("Enter a first number  :- ");
                 scanf("%f",&a);
                 printf("Enter a second number :- ");
                 scanf("%f",&b);
                printf("\nDivision of %f and %f is %f",a,b,a/b);
            }
             break;

        case 'e':
                exit(0);

        }
        getch();
}

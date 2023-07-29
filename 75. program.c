 //Write a program to calculate circumference of a circle(Take Something return Something)
#include<conio.h>
#include<stdio.h>
float circle(float);
main()
{
    float a,b;
    printf("Enter radius of a circle :- ");
    scanf("%f",&b);
    a=circle(b);
    printf("Circumference of a circle is %f",a);
    getch();
}

float circle(float r)
{
    float cir;
    cir=2*3.14*r;
    return cir;
}


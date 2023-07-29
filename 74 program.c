//Write a function to calculate area of circle (Take Something Return Something)
float area(float);
main()
{
    float a, areac;
    printf("Enter radius of circle :- ");
    scanf("%f",&a);
    areac=area(a);
    printf("Area of Circle is %f",areac);

}
float area(float r)
{
    float area;
    area=3.14*r*r;
    return area;
}

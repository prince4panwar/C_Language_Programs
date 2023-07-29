/*Define a structure coordinate with two variables x and y.
 Write function which takes a coordinate as an argument and return quadrant number in which coordinate lies.
 Return 0 if coordinate lies on axes*/
 #include<stdio.h>
 int Quadrant(int a,int b);
 struct coordinate
 {
     int x,y;
 };
 void main()
 {
     int b;
     struct coordinate a;
     printf("Enter coordinate :- \n");
     scanf("%d %d",&a.x,&a.y);
     b=Quadrant(a.x,a.y);
     printf("Quadrant %d",b);
     getch();
 }
int Quadrant(int a,int b)
{
    if(a>0&&b>0)
    return 1;
    if(a>0&&b<0)
    return 4;
    if(a<0&&b>0)
    return 2;
    if(a<0&&b<0)
    return 3;
    if(a==0||b==0)
    return 0;
}

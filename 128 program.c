//Write a program to calculate length of the string without using strlen function
void main()
{
    char str[20];
    int i;
    printf("Enter a string :- ");
    gets(str);
    for(i=0;str[i];i++);
    printf("Length of the string is %d",i);
}

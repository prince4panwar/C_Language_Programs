//Write a program to count occurrence of a given character in a given string.
void main()
{
    char str[20],n;
    int i,a=0;
    printf("Enter a string    :- ");
    gets(str);
    printf("Enter a character :- ");
    scanf("%c",&n);
    for(i=0;str[i];i++)
    {
        if(n==str[i])
           a++;
    }
    printf("%d",a);

}

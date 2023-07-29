//Write a program to convert a string into uppercase without using strupr function
void main()
{
    char str[100];
    int i;
    printf("Enter a string :- ");
    gets(str);
    for(i=0;str[i];i++)
        if(str[i]>='a'&&str[i]<='z')
        str[i]=str[i]-32;
    printf("%s",str);
    getch();
}

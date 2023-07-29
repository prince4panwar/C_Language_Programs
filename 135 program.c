//Write a Program to convert string into lowercase Without  using strlwr function
void main()
{
    char str[100];
    int i;
    printf("Enter a string :- ");
    gets(str);
    for(i=0;str[i];i++)
        if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]+32;
    printf("%s",str);
}

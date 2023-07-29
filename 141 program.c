//Write a function to find index of first occurrence of a given character in a given string
index(char str[], char a, int l);
void main()
{
    char str[20],a;
    int i,l;
    printf("Enter a string :- ");
    gets(str);
    printf("Enter a character :- ");
    scanf("%c",&a);
    for(i=0;str[i];i++);
    l=index(str,a,i);
    printf("\nIndex of first occurrence of a given character(%c) is %d",a,l);
    getch();
}
index(char str[], char a, int l)
{
    int i;
    for(i=0;i<l;i++)
        if(str[i]==a)
            return i;
}

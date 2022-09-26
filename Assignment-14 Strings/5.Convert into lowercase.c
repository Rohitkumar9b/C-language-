#include<stdio.h>
#include<conio.h>
main()
{
    char str[30],temp[30];
    printf("Enter a string");
    gets(str);
    change_UPRcase(str);
    printf("%s",str);
    getch();
}
char* change_UPRcase(char*str);
char* change_UPRcase(char*str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    }
    return str;
}

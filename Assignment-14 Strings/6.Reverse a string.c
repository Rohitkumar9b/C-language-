#include<conio.h>
#include<stdio.h>
main()
{
    char str[30];
    int count=0,i,j;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    for(j=count-1;j>=0;j--)
    {
        printf("%c",str[j]);
    }
    getch();
}

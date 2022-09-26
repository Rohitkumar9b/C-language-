#include<stdio.h>
#include<conio.h>
main()
{
    char ch,str[20];
    int count=0,i=0;
    printf("Enter the string\n");
    gets(str);
    printf("Enter the letter\n");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
            count++;
    }
    printf("\n%d",count);
    getch();
}

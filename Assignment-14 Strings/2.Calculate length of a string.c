#include<conio.h>
#include<stdio.h>
main()
{
    char str[30];
    int count=0,i;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
        if(str[i]==' ')
            count--;
    }

    printf("\nlength of string is %d",count);
    getch();
}

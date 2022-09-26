#include<stdio.h>
#include<conio.h>
main()
{
    char str[20];
    int l;
    printf("Enter a string\n");
    gets(str);
    l=strlen(str);
    printf("length of %s is %d",str,l);
    getch();
}

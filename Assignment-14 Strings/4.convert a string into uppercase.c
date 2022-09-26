#include<stdio.h>
#include<conio.h>
main()
{
    char str[30];
    int i;
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    }
    printf("%s",str);

}

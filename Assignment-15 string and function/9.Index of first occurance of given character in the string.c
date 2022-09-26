#include<stdio.h>
#include<conio.h>
main()
{
    char ch,str[20];
    int count=0,i;
    printf("Enter the string\n");
    gets(str);
    printf("Enter the letter\n");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(ch==str[i])
            count++;
            if(count==1)
            {
                printf("index of first %c is %d",ch,i);
                break;
            }

    }
    getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
    char str[10][15],s[15];
    int i,r,round;

    printf("Enter 10 cities name: ");
    for(i=0;i<10;i++)
        gets(str[i]);

    for(round=1;round<=10;round++)
    {
        for(i=0;i<=10-round;i++)
        {
            r=strcmp(str[i],str[i+1]);
            if(r>0)
            {
                strcpy(s,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],s);
            }
        }
    }

    printf("\nStrings in dictionary order\n");
    for(i=0;i<10;i++)
        puts(str[i]);
    getch();
}

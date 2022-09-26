#include<stdio.h>
#include<conio.h>
main()
{
    char s[8][15],V[]={"aeiouAEIOU"};
    int count=0,i,j,k;
    printf("Enter 8 strings");
    for(i=0;i<8;i++)
        gets(s[i]);
    for(i=0;i<8;i++)
    {
        for(j=0;s[i][j];j++)
        {
            for(k=0;k<=9;k++)
            {
                if(s[i][j]==V[k])
                {
                    count++;
                    printf("%c\t",s[i][j]);
                    break;
                }
            }
        }
    }
    printf("Total number of vowels is %d",count);
    getch();
}

#include<stdio.h>
#include<conio.h>
/*main()
{
    char str[20];
    int i,count=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]=='A'||str[i]=='a')
            count++;
        else if(str[i]=='E'||str[i]=='e')
            count++;
        else if(str[i]=='I'||str[i]=='i')
            count++;
        else if(str[i]=='O'||str[i]=='o')
            count++;
        else if(str[i]=='U'||str[i]=='u')
            count++;
    }
    printf("no of vowels in %s is %d",str,count);
        getch();
}*/
main()
{
    char str[50],V[]="aeiouAEIOU";
    int i,j,count=0;
    printf("Enter a string");
    gets(str);
    for(i=0;str[i];i++)
    {
        for(j=0;V[j];j++)
        {
            if(str[i]==V[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total vowels in %s is %d",str,count);
    getch();
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char str[20],temp[20];
    int i,l1,l2;
    printf("Enter two string\n");
    gets(str);
    gets(temp);
    strupr(str);
    strupr(temp);
    l1=strlen(strupr(str));
    l2=strlen(strupr(temp));
        for(i=0;i<=l1;i++)
        {
            if(str[i]<=str[i+1])
            {
                printf("\n%s not in dictionary order",str);
                break;
            }
        }
        for(i=0;i<=l2;i++)
        {
            if(temp[i]<=temp[i+1])
            {
                printf("%s is not in dictionary order",temp);
                break;
            }
        }
}

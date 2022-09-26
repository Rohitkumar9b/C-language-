#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,t,r;
    printf("Enter ten numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(r=0;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
    printf(" %d",a[i]);
    return 0;
    // getch();
}

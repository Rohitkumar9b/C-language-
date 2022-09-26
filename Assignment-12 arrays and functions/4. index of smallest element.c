#include<stdio.h>
#include<conio.h>
main()
{
    int a[5],t;
    printf("Enter an array");
    for(t=0;t<=4;t++)
        scanf("%d",&a[t]);
    smallest_element(a,5);
    getch();
}
void smallestelement(int b[],int size)
{
    int i,r;
    for(r=0;r<=size-2;r++)
    {

        while(i<=size-1)
        {
            if(b[r]>b[i])
                break;
            i++;
        }
        i=r+1;
        if(i==size-1)
            printf(" %d",r);
    }

}
void smallest_element(int b[],int size)
{
    int i=1,r=0;
    while(r<size-1)
    {
        while(i<size)
        {
            if(b[r]==b[i])
                printf("%d ",r);
            if(b[r]>b[i])
            {
                r=i;
                break;
            }
            i++;
        }
        i++;
    }
    printf(" %d",r);
}

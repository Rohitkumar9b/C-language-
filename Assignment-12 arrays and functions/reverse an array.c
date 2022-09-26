#include<stdio.h>
main()
{
    int a[5],t;
    printf("Enter an array");
    for(t=0;t<5;t++)
        scanf("%d",&a[t]);
    trueReverse(a,5);
    getch();
}
void trueReverse(int a[],int Size)
{
    int i,r,t,k;
    for(r=Size;r>1;r--)
        for(i=1;i<r;i++)
    {
        t=a[Size-i];
        a[Size-i]=a[Size-1-i];
        a[Size-1-i]=t;
    }
    for(k=0;k<Size;k++)
        printf(" %d",a[k]);
}
/*void reverse(int a[],int size)
{
    int i,r,t;
    for(r=1;r<=size;r++)
    {
        for(i=r;i<=size-r;i++)
        {
            t=a[size-i];
            a[size-i]=a[size-1-i];
            a[size-1-i]=t;
        }
    }
    for(i=0;i<size;i++)
            printf(" %d",a[i]);
}
void reverse3(int a[],int size)
{
    int i,r,t;
    for(r=1;r<=size-1;r++)
    {
        for(i=r;i<=size-r;r++)
        {
            t=a[size-i];
            a[size-i]=a[size-1-i];
            a[size-1-i]=t;
        }
        for(i=0;i<size;i++)
            printf(" %d",a[i]);
    }
}
void reverse2(int a[],int size)
{
    int i,t;
    for(t=1;t<=size;t++)

    for(i=1;i<=size-1;i++)
    {
        t=a[size-i];
        a[size-i]=a[size-1-i];
        a[size-1-i]=t;
    }
    for(i=0;i<=size-1;i++)
        printf(" %d",a[i]);
}*/


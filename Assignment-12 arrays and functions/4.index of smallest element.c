#include<stdio.h>
#include<conio.h>
main()
{
    int b[5],i,k;
    printf("Enter 5 number");
    for(i=0;i<=4;i++)
        scanf("%d",&b[i]);
    k=IndexOfSmallest(b,5);
    printf("Index of Smallest element %d\n",k);
    getch();
}
int IndexOfSmallest(int a[],int Size)
{
    int min,i;
    min=a[0];
    for(i=1;i<Size;i++)
        if(min>a[i])
            min=a[i];
    for(i=0;i<Size;i++)
        if(min==a[i])
        return i;
}

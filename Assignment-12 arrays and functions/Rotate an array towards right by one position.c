#include<stdio.h>
#include<conio.h>
main()
{
    int b[5],i,k;
    printf("Enter 5 number");
    for(i=0;i<=4;i++)
        scanf("%d",&b[i]);
    rotateright_1position(b,5);
getch();
}
void rotateright_1position(int a[],int size)
{
    int i,t;
    for(i=1;i<=size-1;i++)
    {
        t=a[size-i];
        a[size-i]=a[size-1-i];
        a[size-1-i]=t;
    }
    for(i=0;i<=size-1;i++)
        printf(" %d",a[i]);
}


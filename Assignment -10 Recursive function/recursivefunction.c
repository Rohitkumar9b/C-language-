#include<stdio.h>
#include<conio.h>
main()
{
    int x,k;
    printf("Enter a number");
    scanf("%d",&x);
    k=sumdigits(x);
    printf("%d",k);
    getch();
}
void binary(int n)
{
    int r;
   if(n>0)
    {
        binary(n/2);
    }
        r=n%2;
        printf("%d",r);
}
void print_n(int n)
{
    if(n>0)
    {
        print_n(n-1);
        printf("%d ",n);
    }
}
void print_n_reverse(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        print_n_reverse(n-1);
    }
}
void neven(int n)
{
    if(n>0)
    {
        neven(n-1);
        printf("%d ",2*n);
    }
}
void neven_reverse(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        neven_reverse(n-1);

    }
}
void nodd(int n)
{
    if(n>0)
    {
        nodd(n-1);
        printf("%d ",2*n-1);
    }
}
void nodd_reverse(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        nodd_reverse(n-1);

    }
}
int sum_n(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n+sum_n(n-1);
    return s;
}
int sum_neven(int n)
{
    int s;
    if(n==1)
        return 2;
    s=2*n+sum_neven(n-1);
    return s;
}
int sum_nodd(int n)
{
    int s;
    if(n==1)
        return 1;
    s=(2*n-1)+sum_nodd(n-1);
    return s;
}
int sum_n_squares(int n)
{
    int s;
    if(n==1)
        return 2;
    s=n*n+sum_n_squares(n-1);
    return s;
}
int sumdigits(int n)
{
    int r,s;

    if(n>0)
    s=r+sumdigits(n/10);
    r=n%10;
    if(n==n)
    return s;
}



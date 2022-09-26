#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,r,bin=0,l,k;
    scanf("%d",&n);
    k=n;
    while(n%2==0)
    {
        i=i*10;
        n=n/2;
    }
    while(k>0)
    {
        r=k%2;
        bin=bin*10+r;
        k=k/2;
    }
    l=reverse(bin);
    printf("%d ",l*i);
}
int reverse(int N)
{
    int j=0,s;
    while(N)
    {
        s=N%10;
        j=j*10+s;
        N=N/10;
    }
    return j;
}

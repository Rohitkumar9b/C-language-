#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,r,Oct=0,l,k;
    scanf("%d",&n);
    k=n;
    while(n%8==0)
    {
        i=i*10;
        n=n/8;
    }
    while(k>0)
    {
        r=k%8;
        Oct=Oct*10+r;
        k=k/8;
    }
    l=reverse(Oct);
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


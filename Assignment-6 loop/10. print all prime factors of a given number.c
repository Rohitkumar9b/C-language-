#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,j,r,k;
    printf("Enter a number:");
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        r=N%i;
        if(r==0)
        {
            for(j=2;j<i;j++)
            {
                k=i%j;
                if(k==0)
                    break;
            }
            if(k!=0)
                printf("%d ",i);
        }
    }
    getch();
}

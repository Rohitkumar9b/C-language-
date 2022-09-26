int max_among_four(int a,int b,int c,int d)
{
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                return a;
            }
            else
                return d;
        }
        else
        {
            if(c>d)
            {
                return c;
            }
            else
                return d;
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                return d;
            }
            else
                return b;
        }
        else
        {
            if(c>d)
            {
            return c;
            }
            else
                return d;
        }

    }
}
int main()
{
    int n,i,j;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        k=n;
        for(j=1;j<=2*n-1;j++)
        {
            printf("%d ",j);
        }
    }
}

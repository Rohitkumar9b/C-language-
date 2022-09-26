main()
{
    int i,j,k,t,c;
    for(i=0;i<4;i++)
    {
        t=1;
        for(j=1;j<=7;j++)
        {
            if(j>=4-i&&j<=4+i)
            {
                if(j>4)
                {
                    c=c-1;
                    printf("%d ",c);
                }
                else
                {
                    k=t++;
                    printf("%d ",k++);
                    c=k-1;
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


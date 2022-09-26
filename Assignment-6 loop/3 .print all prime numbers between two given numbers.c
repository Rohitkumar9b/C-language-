main()
{
    int N,i,k,t,r;
    printf("Enter two numbers");
    scanf("%d%d",&k,&N);
    for(i=k;i<=N;i++)
    {
        for(t=2;t<i;t++)
        {
            r=i%t;
            if(r==0)
                break;
        }
        if(r!=0)
            printf("%d ",i);
    }
    getch();
}

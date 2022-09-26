main()
{
    int N,r,i,t;
    printf("Enter a number:");
    scanf("%d",&N);
    for(i=N+1;i>N;i++)
    {
        for(t=2;t<i;t++)
        {
            r=i%t;
            if(r==0)
                break;
        }
        if(r!=0)
        {
            printf("%d",i);
            break;
        }
    }
    getch();
}

main()
{
    int i,N,r;
    for(N=2;N<=100;N++)
    {
        for(i=2;i<N;i++)
        {
            r=N%i;
            if(r==0)
                break;
        }
        if(r!=0)
            printf("%d ",N);
    }
    getch();
}

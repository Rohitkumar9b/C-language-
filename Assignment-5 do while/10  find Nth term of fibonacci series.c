main()
{
    int f=1,k=0,t=1,i=1,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    while(i<N)
    {
        i++;
        f=t+k;
        k=t;
        t=f;
        if(N==f)
        {
            printf("terms in fibonacci series");
        }
    }
    if(N!=f)
    printf("not terms in fibonacci series");
    getch();
}

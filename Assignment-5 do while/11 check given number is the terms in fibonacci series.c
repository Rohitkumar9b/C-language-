main()
{
    int f=1,k=0,t=1,i=1,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    do
    {
        printf("%d ",f);
        f=t+k;
        k=t;
        t=f;
        i++;
    }while(i<=N);
    if(f==N)
    printf("Terms in fibonacci series");
    else
        printf("Not have terms in fibonacci series");
    getch();
}


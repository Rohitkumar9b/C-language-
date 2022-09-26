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
    getch();
}

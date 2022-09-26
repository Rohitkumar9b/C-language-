main()
{
    int N,i,r;
    printf("Enter a number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        r=N%i;
        if(r==0)
            printf("%d ",i);
    }
    getch();
}

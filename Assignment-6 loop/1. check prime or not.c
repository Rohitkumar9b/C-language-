main()
{
    int i,r=1,N;
    printf("Enter a number:");
    scanf("%d",&N);
    for(i=2;i<N;i++)
    {
        r=N%i;
        if(r==0)
            break;
    }
    if(r==0)
    {
        printf("Not PRime");
    }
    else
    {
        printf("PRime ");
    }
    getch();
}

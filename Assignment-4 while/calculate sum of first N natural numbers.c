main()
{
    int N,s=0,i=1;
    printf("Enter the value of N:");
    scanf("%d",&N);
    while(i<=N)
    {
        s=s+i;
        i++;
    }
    printf("%d",s);
    getch();
}

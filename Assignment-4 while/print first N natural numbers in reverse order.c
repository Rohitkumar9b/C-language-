main()
{
    int N,i=1;
    printf("Enter the value of N:");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",N+1-i);
        i++;
    }
    getch();
}


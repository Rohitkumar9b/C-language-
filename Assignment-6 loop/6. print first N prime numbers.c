main()
{
    int t,i,r=1,n,count=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n*n;i++)
    {
        for(t=2;t<i;t++)
          {
              r=i%t;
              if(r==0)
                break;
          }
          if(r!=0)
          {
              printf("%d ",i);
              count++;
          }
          if(count==n)
            break;
    }
    getch();
}

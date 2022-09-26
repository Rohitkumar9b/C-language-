main()
{
    int i,sum=0,a[10];
    printf("Enter ten numbers");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        sum=sum+a[i];
    printf("Sum is %d",sum);
    getch();
}

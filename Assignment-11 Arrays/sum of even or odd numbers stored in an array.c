main()
{
    int a[10],i,se=0,so=0;
    printf("Enter ten numbers:");
    for(i=1;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=9;i++)
    {
        if(a[i]%2==0)
            se=se+a[i];
        else
            so=so+a[i];
    }
    printf("\nsum of all even numbers =%d",se);
    printf("\nSum of all odd numbers =%d",so);
    getch();
}

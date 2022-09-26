main()
{
    int a[10],i,r,max;
    printf("Enter ten numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        max=a[0];
        for(i=1;i<=9;i++)
            if(max<a[i])
            max=a[i];
       for(r=0;r<=9;r++)
                if(max==a[r])
                printf("index of greatest number %d",r);
    printf("\nGreatest number is %d",max);
    getch();
}

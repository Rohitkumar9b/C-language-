main()
{
    int a[10],i,r,min;
    printf("Enter ten numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        min=a[0];
    for(i=1;i<=9;i++)
          if(min>a[i])
            min=a[i];
    for(r=0;r<=9;r++)
        if(min==a[r])
            printf("Index of smallest number is %d",r);
    printf("\nSmallest number is %d",min);
    getch();
}

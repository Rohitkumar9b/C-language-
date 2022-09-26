main()
{
    int p,r,t;
    printf("Enter principal amount ");
    scanf("%d",&p);
    printf("Enter rate of interest ");
    scanf("%d",&r);
    printf("Enter time duration in year ");
    scanf("%d",&t);
    printf("Simple interest is %d",(p*r*t)/100);
    getch();
}

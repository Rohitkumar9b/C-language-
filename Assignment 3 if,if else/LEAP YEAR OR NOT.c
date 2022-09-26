main()
{
    int yr;
    printf("Enter a year:");
    scanf("%d",&yr);
    if(yr%4==0||yr%400==0)
    {
        printf("leap year");
    }
    else
    {
        printf("Not leap year");
    }
    getch();
}

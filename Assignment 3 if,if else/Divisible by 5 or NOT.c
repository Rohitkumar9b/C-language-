main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%5==0)
    {
        printf("Divisible by 5");
    }
    if(x%5!=0)
    {
        printf("Not divisible by 5");
    }
    getch();
}

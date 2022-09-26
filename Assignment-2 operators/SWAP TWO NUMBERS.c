main()
{
    int a,b,temp;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("swaped number is %d\n%d",a,b);
    getch();
}

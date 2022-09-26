void divide()
{
    float a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("value is %0.2f ",c);
    getch();
}
void multiply()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("Product is %d ",c);
    getch();
}
void sub()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("Difference is %d ",c);
    getch();
}
void add()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d ",c);
    getch();
}
void add();
void sub();
void multiply();
void divide();
main()
{
    int x;
    printf(" 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication");
    printf("\n 4.Divide");
    printf("\n 5.Exit");
    printf("\n Choose a option:");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        multiply();
        break;
    case 4:
        divide();
        break;
    case 5:
        printf("Exit");
        break;
    default:
        printf("Invalid Choice");
    }
getch();
}

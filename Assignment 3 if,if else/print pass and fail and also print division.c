main()
{
    int a,b,c,d,e,T;
    //a<=100,b<=100,c<=100,d<=100,e<=100;
    printf("Enter marks of five subjects:\nEnglish(MM=100) =");
    scanf("%d",&a);
    printf("Mathematics(MM=100) =");
    scanf("%d",&b);
    printf("Science(MM=100) =");
    scanf("%d",&c);
    printf("Social Science(MM=100) =");
    scanf("%d",&d);
    printf("Hindi(MM=100) =");
    scanf("%d",&e);
    T=a+b+c+d+e;
    printf("%d\n",T);
    if(T>150)
           printf("Pass\n");
    else
        printf("Fail\n");
    if(150<=T&&T<225)
        printf("third division");
    if(225<=T&&T<300)
        printf("Second Division");
    if(T>300)
        printf("First Division");
    getch();
}

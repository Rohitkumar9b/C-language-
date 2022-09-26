main()
{
    int a,b,c,D;
    printf("Enter a,b,c of quadratic equation");
    scanf("%d%d%d",&a,&b,&c);
    //printf("%dx*x+%d*x+%d=0\n",a,b,c);
    D=b*b-4*a*c;
    printf("%d",D);
    if(D>0)
        {
            printf("\nReal roots");
        }
    if(D=0)
       {
           printf("\nReal and Repeated roots");
       }
    if(D<0)
        {
            printf("\nImaginary roots");
        }
    getch();
}

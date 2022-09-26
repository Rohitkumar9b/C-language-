main()
{
    int i,j,flag;
    for(i=0;i<5;i++)
    {
        flag=2;
        for(j=1;j<=9;j++)
        {

            if(j>=5-i&&j<=5+i)
            {
                if(flag%2==0)
                {
                    printf("*");
                    flag++;
                }
                else
                {
                    printf(" ");
                    flag++;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

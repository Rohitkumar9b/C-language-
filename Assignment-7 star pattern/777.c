main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=4-i||j>=4+i)
            {
                if(j>=4+i)
                    printf("%c",72-j);
                else
                    printf("%c",64+j);
            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");
    }
}

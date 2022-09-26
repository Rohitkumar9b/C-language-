main()
{
    int b[10],i;
    printf("Enter 10 number");
    for(i=0;i<=9;i++)
        scanf("%d",&b[i]);
    rotateright_1position(b,10);
getch();
}
void rotateright_1position(int a[],int size);


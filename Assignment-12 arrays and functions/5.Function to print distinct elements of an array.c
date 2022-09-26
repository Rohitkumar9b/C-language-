void distinct_value(int a[],int Size)
{
    int i,r,t;
    for(i=0;i<Size-1;i++)
        for(r=i+1;r<Size;r++)
        if(a[i]==a[r])
        break;
    if(r==Size-1)
        printf("%d ",a[i]);
}
int main()
{
    int k,a[5];
    for(k=0;k<5;k++)
        scanf("%d",&a[k]);
    distinct_value(a,5);
    getch();

}

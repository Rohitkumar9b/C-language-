void bubble_sort(int a[],int Size)
{
    int i,t,k,r;
    for(i=1;i<Size;i++)
    for(r=0;r<Size-i;r++)
    {
        if(a[r]>a[r+1])
        {
            t=a[r];
            a[r]=a[r+1];
            a[r+1]=t;
        }
    }
    for(k=0;k<Size;k++)
        printf("%d ",a[k]);
}
int main()
{
    int i,a[5];
    printf("Enter the numbers");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    bubble_sort(a,5);
    getch();
}

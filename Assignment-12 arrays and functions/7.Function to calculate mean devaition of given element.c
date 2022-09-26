void mean_devaition(int a[],int Size)
{
    int i,k;
    float avg,MD,sum=0,add=0;
    for(i=0;i<Size;i++)
        sum=sum+a[i];
    avg=sum/Size;
    for(k=0;k<Size;k++)
       if((avg-a[k])>0)
        add=add+(avg-a[k]);
       else
        add=add-(avg-a[k]);
    MD=add/Size;
    printf("Mean deviation is %f",MD);
}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    mean_devaition(a,5);
    getch();
    return 0;
}

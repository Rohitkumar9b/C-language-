
float area_of_circle(int r)
{
    return 3.14*r*r;
}
int circumference_of_circle(int r)
{
    return 2*3.14*r;
}
void n_natural_numbers(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}
void n_even_numbers(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d ",i*i);
}
int sum_natural_numbers(int n)
{
    int i;
    for(i=1;i<=n;i++)

}
#include<stdio.h>
#include<conio.h>
float area_of_circle(int);
int circumference_of_circle(int);
void n_natural_numbers(int);
void n_even_numbers(int);
main()
{
    int k,p,c;
    printf("Enter a number");
    scanf("%d",&k);
    n_natural_numbers(k);
    p=area_of_circle(k);
    c=circumference_of_circle(k);
    printf("area=%d\ncircumference=%d\n",p,c);
    n_even_numbers(k);
    getch();
}

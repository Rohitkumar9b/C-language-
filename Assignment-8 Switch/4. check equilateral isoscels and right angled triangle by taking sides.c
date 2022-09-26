#include<stdio.h>
#include<conio.h>
void isosceles()
{
    int a,b,c;
    printf("Enter the length of side of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("Not");
    else
    {
        if(a==b||b==c)
            printf("Isoceles triangle");
        else
            printf("Not");
    }
}
void right_angled_traingle()
{
   int p,b,h,k,c;
   printf("Enter the sides of trinagle");
   scanf("%d%d%d",&p,&b,&h);
   k=(p*p+b*b);
   c=h*h;
   if(k==c)
    printf("Right angled triangle");
   else
    printf("Not");
}
void equilateral()
{
    int a,b,c;
    printf("Enter the length of sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("Equilateral triangle");
    else
        printf("Not");
}
void equilateral();
void right_angled_traingle();
void isosceles();
main()
{
    int x;
    printf("1.Check Isosceles tiangle or Not");
    printf("\n2.check Right angled triangle of Not");
    printf("\n3.Check Equilateral triangle or Not");
    printf("\n4.Exit");
    printf("\nEnter your choice");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        isosceles();
        break;
    case 2:
        right_angled_traingle();
        break;
    case 3:
        equilateral();
        break;
    case 4:
        printf("Exit");
        break;
    default:
        printf("Invalid Choice");
    }
    getch();
}

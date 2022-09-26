#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        float salary,k,p;
        cin>>salary;
        if(salary>=1500)
        {
            k=salary+500+salary*0.98;
            cout<<k;
        }
        else
        {
            p=salary+salary;
            cout<<p;
        }
    }
    getch();
}

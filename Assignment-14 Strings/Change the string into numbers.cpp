#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>'0' && s[i]<'9')
            n=n*10+(s[i]-'0');
    }
    cout<<n;
    /*int rev=0;
    for(int i=s.size()-1;i>=0;i--){
        rev=rev*10+(s[i]-'0');

    }
    int num=0;
    while(rev>0){
        int rem=rev%10;
        num=num*10+rem;
        rev=rev/10;
    }
    cout<<num;*/

}

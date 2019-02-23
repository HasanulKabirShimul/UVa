#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,a,b;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        if(b%a!=0)
            cout<<"-1"<<endl;
        else
            cout<<a<<" "<<b<<endl;
    }
    return 0;

}

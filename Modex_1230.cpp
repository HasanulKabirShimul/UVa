#include<bits/stdc++.h>
using namespace std;
int mod(long long int x,long long int y,long long int n)
{
    if(y==0)
        return 1;
    if(y%2==0)
    {
        long long int d =  mod(x,y/2,n);
        return ((d%n)*(d%n))%n;
    }
    else
    {
        long long int d = mod(x,y-1,n);
        return ((x%n)*(d%n))%n;

    }
}
int main()
{
    int T,t;
    cin>>T;
    for(t=1; t<=T; t++)
    {
        long long int x,y,n;
        cin>>x>>y>>n;
        if(x==0||y==0||n==0)
            return 0;
        int z = mod(x,y,n);
        cout<<z<<endl;
    }
        return 0;

}

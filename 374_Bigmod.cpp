#include<iostream>
#define LL long long int
using namespace std;
LL bigmod(LL base,LL power,LL mod)
{
    LL p1,p2,ans;
    if(power==0)
        return 1;
    else if(power%2==0)
    {
        p1 = (bigmod(base,power/2,mod))%mod;
        ans = (p1*p1)%mod;
        return ans;
    }
    else if(power%2==1)
    {
        p1 = base%mod;
        p2 = (bigmod(base,power-1,mod))%mod;
        ans = (p1*p2)%mod;
        return ans;
    }
    return ans;
}
int main()
{
    LL base,power,mod,ans;
    while(cin>>base>>power>>mod)
    {
        ans = bigmod(base,power,mod);
        cout<<ans<<endl;

    }
    return 0;

}

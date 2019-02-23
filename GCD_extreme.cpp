#include<bits/stdc++.h>
using namespace std;
unsigned long long int gcd(int i,int j)
{
    if(j<i)
        swap(i,j);
    if(j%i==0)
        return i;
    return gcd(i,j%i);
}
int main()
{
    unsigned long long int n,i,j;
    while(cin>>n)
    {
        long long int g  = 0;
        if(n==0)
            break;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                g+=gcd(i,j);
            }
        }
        cout<<g<<endl;

    }
    return 0;

}

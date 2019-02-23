#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a,b;
public:
    friend int sum(myclass x);
    void setdata(int i,int j);
};
void myclass::setdata(int i,int j)
{
    a = i;
    b = j;
}
int sum(myclass x)
{
    return (x.a + x.b);
}
int main()
{
    myclass e;
    e.setdata(50,50);
    cout<<sum(e)<<endl;
    return 0;

}

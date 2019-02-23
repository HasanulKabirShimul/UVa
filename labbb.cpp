#include<bits/stdc++.h>
using namespace std;
class myclass
{
    static int count;
public:
    static int x;
    void setvalue(int p);
    int getvalue();
    void show()
    {
        count = getvalue();
        cout<<count<<endl;
    }
};
int myclass::count=0;
int myclass::x=0;
void myclass::setvalue(int p)
{
    x = p;
}
int myclass::getvalue()
{
    return x;
}
int main()
{
    myclass s1;
    s1.setvalue(24022018);
    s1.show();
    return 0;
}

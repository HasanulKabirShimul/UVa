#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a,b;
public:
    void init(int i ,int j);
    void show();


};
inline void myclass:: init(int i,int j)
{
    a = i;
    b = j;
}
inline void myclass::show()
{
    cout<<a<< " "<<b<<endl;
}

int main(){
    myclass p;
    p.init(10,20);
    p.show();
}

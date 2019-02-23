#include<iostream>
using namespace std;
int main()
{
    long int n,p,i;
    while(cin>>n)
    {
    p = 1;
    i = 1;
    while(1)
    {
        if(i%2==1)
            p = p*9;
        else
            p = p*2;
        if(p>=n)
            break;
        i++;
    }
    if(i%2==1)
        cout<<"Stan wins.\n";
    else
        cout<<"Ollie wins.\n";
}
return 0;
}



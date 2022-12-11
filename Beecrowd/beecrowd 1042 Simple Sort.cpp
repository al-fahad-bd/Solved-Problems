#include <iostream>

using namespace std;

int main() {

    int a,b,c,temp,x,y,z;
    cin>>a>>b>>c;
    x=a;
    y=b;
    z=c;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<endl<<x<<endl<<y<<endl<<z<<endl;
    return 0;
}

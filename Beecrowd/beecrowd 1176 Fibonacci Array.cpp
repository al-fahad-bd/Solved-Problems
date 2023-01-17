#include <iostream>

using namespace std;

int main() {

    int i,t,pos;
    unsigned long long f[60];
    f[0]=0;
    f[1]=1;
    for(i=2;i<=60;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>pos;
        cout<<"Fib("<<pos<<") = "<<f[pos]<<endl;
    }

    return 0;
}

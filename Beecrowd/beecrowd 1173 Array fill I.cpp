#include <iostream>

using namespace std;

int main() {

    int n[10],i,x;
    int v;
    cin>>v;
    for(i=0;i<10;i++)
    {
        n[i]=v;
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
        v=2*v;
    }

    return 0;
}

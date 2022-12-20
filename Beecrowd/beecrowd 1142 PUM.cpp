#include <iostream>

using namespace std;

int main() {

    int n,i;
    cin>>n;
    for(i=1;i<n*4; )
    {
        cout<<i<<" "<<i+1<<" "<<i+2<<" PUM"<<endl;
        i=i+4;
    }

    return 0;
}

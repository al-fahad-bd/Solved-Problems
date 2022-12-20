#include <iostream>

using namespace std;

int main() {

    int n,i;
    cin>>n;
    for(i=1;i<=n; )
    {
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        i=i+1;
    }
    return 0;
}

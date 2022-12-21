#include <iostream>

using namespace std;

int main() {

    int i,n,a[50];
    cin>>n;
    a[0]=0;
    a[1]=1;
    cout<<a[0];
    cout<<" "<<a[1];
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        cout<<" "<<a[i];
    }
    cout<<endl;

    return 0;
}

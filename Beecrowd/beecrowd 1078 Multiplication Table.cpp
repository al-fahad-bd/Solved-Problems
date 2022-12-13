#include <iostream>

using namespace std;

int main() {

    int n,i,mul;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        mul = n*i;
        cout<<i<<" x "<<n<<" = "<<mul<<endl;
    }

    return 0;
}

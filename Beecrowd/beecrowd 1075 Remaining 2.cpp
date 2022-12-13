#include <iostream>

using namespace std;

int main() {

    int n,i,rem;
    cin>>n;
    for(i=1;i<=10000;i++)
    {
        rem=i%n;
        if(rem==2)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int x,y,i,n=1;
    cin>>x>>y;
    for(i=1;i<=y;i++)
    {
        if(n==x)
        {
            cout<<i<<endl;
            n=1;
        }
        else
        {
            cout<<i<<" ";
            n++;
        }
    }
    return 0;
}

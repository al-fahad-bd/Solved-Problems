#include <iostream>

using namespace std;

int main() {

    int i,x;
    cin>>x;
    for(i=x; i<x+12 ; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}

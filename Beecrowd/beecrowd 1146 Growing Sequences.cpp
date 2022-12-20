#include <iostream>

using namespace std;

int main() {

    int x,i;
    while(true)
    {
        cin>>x;
        if(x==0)
            break;
        else
        {
            for(i=1;i<x;i++)
            {
                cout<<i<<" ";
            }
            cout<<x<<endl;
        }
    }
    return 0;
}

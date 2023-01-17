#include <iostream>
using namespace std;

int main() {

    int t,i,j=0;
    cin>>t;
    for(i=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<j<<endl;
        j++;
        if(j==t)
        {
            j=0;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int n[20];
    int i;
    for(i=19;i>=0;i--)
    {
        cin>>n[i];
    }
    for(i=0;i<20;i++)
    {
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }

    return 0;
}

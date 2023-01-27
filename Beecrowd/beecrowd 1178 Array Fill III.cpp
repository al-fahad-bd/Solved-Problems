#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double x;
    cin>>x;
    int i;
    for(i=0;i<100;i++)
    {
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<x<<endl;
        x=x/2;
    }

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int i,n=100;
    double s=0;
    for(i=1;i<=100;i++)
    {
        s = s + (1.00/i);
    }
    cout<<fixed<<setprecision(2)<<s<<endl;

    return 0;
}

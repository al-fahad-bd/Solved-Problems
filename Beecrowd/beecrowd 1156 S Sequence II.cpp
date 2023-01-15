#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int i;
    double s=0,j=1;
    for(i=1;i<=39;i+=2)
    {
        s = s + (i/j);
        j=2*j;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;

    return 0;
}

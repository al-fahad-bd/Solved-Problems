#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int X;
    double Y;
    cin>>X>>Y;
    double avg_consumption = X/Y;
    cout<<fixed<<setprecision(3)<<avg_consumption<<" km/l"<<endl;

    return 0;
}

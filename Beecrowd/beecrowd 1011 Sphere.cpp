#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double R, volumn;
    double pi = 3.14159;
    cin>> R;
    volumn = (4/3.00) * pi * R*R*R;
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<volumn<<endl;

    return 0;
}

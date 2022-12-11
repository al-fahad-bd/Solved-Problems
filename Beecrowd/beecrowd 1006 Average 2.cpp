#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A,B,C,avg;
    cin>>A>>B>>C;
    avg=(A*2+B*3+C*5)/(2+3+5);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<avg<<endl;

    return 0;
}

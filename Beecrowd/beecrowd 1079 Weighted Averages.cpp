#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int i,j,n;
    float num1,num2,num3,avg;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num1>>num2>>num3;
        avg = (num1*2+num2*3+num3*5)/(2+3+5);
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }

    return 0;
}

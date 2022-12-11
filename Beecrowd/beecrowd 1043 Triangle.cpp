#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float a,b,c;
    cin>>a>>b>>c;
    float sum1 = a+b;
    float sum2 = a+c;
    float sum3 = b+c;
    float area = 0.5*(a+b)*c;
    float perimetro = a+b+c;
    if (sum1>c && sum2>b && sum3>a)
    {
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<perimetro<<endl;
    }
    else
    {
        cout<<"Area = "<<fixed<<setprecision(1)<<area<<endl;
    }
    return 0;
}

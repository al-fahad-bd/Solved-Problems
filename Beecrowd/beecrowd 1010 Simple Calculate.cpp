#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int p1_code, p1_units, p2_code, p2_units;
    double p1_price, p2_price;
    cin>>p1_code>>p1_units>>p1_price;
    cin>>p2_code>>p2_units>>p2_price;
    double paying_amount=(p1_units*p1_price)+(p2_units*p2_price);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<paying_amount<<endl;

    return 0;
}

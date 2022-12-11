#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double A,B,C;
    double pi = 3.14159,tri,cir,tra,squ,rec;

    cin>>A>>B>>C;
    tri= 0.5*A*C;
    cir= pi*(C*C);
    tra= (A+B)/2*C;
    squ= B*B;
    rec = A*B;

    cout<<fixed;
    cout<<"TRIANGULO: "<<setprecision(3)<<tri<<endl;
    cout<<"CIRCULO: "<<setprecision(3)<<cir<<endl;
    cout<<"TRAPEZIO: "<<setprecision(3)<<tra<<endl;
    cout<<"QUADRADO: "<<setprecision(3)<<squ<<endl;
    cout<<"RETANGULO: "<<setprecision(3)<<rec<<endl;

    return 0;
}

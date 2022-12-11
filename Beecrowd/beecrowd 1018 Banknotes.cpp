#include <iostream>

using namespace std;

int main() {

    int n,rem;
    cin >> n;
    int note100 = n / 100;
    rem = n%100;
    int note50 = rem / 50;
    rem = rem%50;
    int note20 =  rem / 20;
    rem = rem%20;
    int note10 = rem / 10;
    rem = rem%10;
    int note5 = rem / 5;
    rem = rem%5;
    int note2 =  rem / 2;
    rem = rem%2;
    int note1 = rem/1;
    cout << n << endl;
    cout << note100 << " nota(s) de R$ 100,00"<<endl;
    cout << note50 << " nota(s) de R$ 50,00"<<endl;
    cout << note20 << " nota(s) de R$ 20,00"<<endl;
    cout << note10 << " nota(s) de R$ 10,00"<<endl;
    cout << note5 << " nota(s) de R$ 5,00"<<endl;
    cout << note2 << " nota(s) de R$ 2,00"<<endl;
    cout << note1 << " nota(s) de R$ 1,00"<<endl;

    return 0;
}

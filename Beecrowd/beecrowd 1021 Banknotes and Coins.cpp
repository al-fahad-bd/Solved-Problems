#include <iostream>

using namespace std;

int main() {

    double n;
    cin >> n;
    int num,rem,rem2 = n*100;
    num = n;
    int note100 = n / 100;
    rem = num%100;
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

    int coin1 = rem/1;
    rem2 = rem2%100;
    int coin050 = rem2/50;
    rem2 = rem2%50;
    int coin025 = rem2/25;
    rem2 = rem2%25;
    int coin010 = rem2/10;
    rem2 = rem2%10;
    int coin005 = rem2/5;
    rem2 = rem2%5;
    int coin001 = rem2/1;

    cout << "NOTAS:" <<endl;
    cout << note100 << " nota(s) de R$ 100.00" <<endl;
    cout << note50 << " nota(s) de R$ 50.00" <<endl;
    cout << note20 << " nota(s) de R$ 20.00" <<endl;
    cout << note10 << " nota(s) de R$ 10.00" <<endl;
    cout << note5 << " nota(s) de R$ 5.00" <<endl;
    cout << note2 << " nota(s) de R$ 2.00" <<endl;
    cout << "MOEDAS:" <<endl;
    cout << coin1 << " moeda(s) de R$ 1.00" <<endl;
    cout << coin050 << " moeda(s) de R$ 0.50" <<endl;
    cout << coin025 << " moeda(s) de R$ 0.25" <<endl;
    cout << coin010 << " moeda(s) de R$ 0.10" <<endl;
    cout << coin005 << " moeda(s) de R$ 0.05" <<endl;
    cout << coin001 << " moeda(s) de R$ 0.01" <<endl;
    return 0;
}

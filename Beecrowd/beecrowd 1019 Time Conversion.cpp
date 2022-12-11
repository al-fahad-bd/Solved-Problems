#include <iostream>

using namespace std;

int main() {

    int n,rem;
    cin >> n;
    int hours,minutes,seconds;
    hours = n/3600;
    rem = n % 3600;
    minutes = rem/60;
    rem = rem%60;
    seconds = rem;
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;

    return 0;
}

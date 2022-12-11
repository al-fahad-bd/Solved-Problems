#include <iostream>

using namespace std;

int main() {

    int age,rem;
    cin>>age;
    int years, months, days;
    years = age/365;
    rem = age%365;
    months = rem/30;
    rem = rem%30;
    days = rem;
    cout << years << " ano(s)"<<endl;
    cout << months << " mes(es)"<<endl;
    cout << days << " dia(s)"<<endl;

    return 0;
}

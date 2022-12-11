#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int num,worked_hours;
    double amount,salary;
    cin>>num>>worked_hours;
    cin>>amount;
    salary = worked_hours*amount;
    cout<<"NUMBER = "<<num<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float salary,tax,rem;
    cin>>salary;

    if(salary>=0 && salary<=2000)
    {
        cout<<"Isento"<<endl;
    }
    else if(salary>2000 && salary<=3000)
    {
        tax = (salary-2000)*8/100;
        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
    }
    else if(salary>3000 && salary<=4500)
    {
        rem = salary-3000;
        tax = ((3000-2000)*8/100) + (rem*18/100);
        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
    }
    else if(salary>4500)
    {
        rem = salary-4500;
        tax = ((3000-2000)*8/100) + ((4500-3000)*18/100) + (rem*28/100);
        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
    }


    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double salary,new_salary,earned_money;
    int rate;
    cin>>salary;
    if(salary>=0 && salary<=400)
    {
        new_salary = salary + salary*15/100;
        earned_money = salary*15/100;
        rate = 15;
    }
    else if(salary>400 && salary<=800)
    {
        new_salary = salary + salary*12/100;
        earned_money = salary*12/100;
        rate = 12;
    }
    else if(salary>800 && salary<=1200)
    {
        new_salary = salary + salary*10/100;
        earned_money = salary*10/100;
        rate = 10;
    }
    else if(salary>1200 && salary<=2000)
    {
        new_salary = salary + salary*7/100;
        earned_money = salary*7/100;
        rate = 7;
    }
    else if(salary>2000)
    {
        new_salary = salary + salary*4/100;
        earned_money = salary*4/100;
        rate = 4;
    }
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_salary<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earned_money<<endl;
    cout<<"Em percentual: "<<rate<<" %"<<endl;

    return 0;
}

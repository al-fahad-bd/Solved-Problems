#include<iostream>
using namespace std;
int main()
{
    int fuel,cA=0,cG=0,cD=0;
    while(true)
    {
        cin>>fuel;
        if(fuel==4)
        {
            break;
        }
        if(fuel==1)
        {
            cA++;
        }
        if(fuel==2)
        {
            cG++;
        }
        if(fuel==3)
        {
            cD++;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<cA<<endl;
    cout<<"Gasolina: "<<cG<<endl;
    cout<<"Diesel: "<<cD<<endl;
}

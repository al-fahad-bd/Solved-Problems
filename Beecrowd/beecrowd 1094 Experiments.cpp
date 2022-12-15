#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n,i,amount,total=0,total_c=0,total_r=0,total_s=0;
    double rate_c,rate_r,rate_s;
    char type;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>amount;
        cin>>type;
        total =total+amount;

        if(type=='C')
        {
            total_c = total_c+amount;
        }
        else if(type=='R')
        {
            total_r = total_r+amount;
        }
        else if(type=='S')
        {
            total_s = total_s+amount;
        }

    }
    rate_c = total_c/(total/100.00);
    rate_r = total_r/(total/100.00);
    rate_s = total_s/(total/100.00);
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<total_c<<endl;
    cout<<"Total de ratos: "<<total_r<<endl;
    cout<<"Total de sapos: "<<total_s<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<rate_c<<" %"<<endl;
    cout<<"Percentual de ratos: "<<rate_r<<" %"<<endl;
    cout<<"Percentual de sapos: "<<rate_s<<" %"<<endl;
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double n1,n2,n3,n4,n5;
    cin>>n1>>n2>>n3>>n4;
    double avg = (2*n1+3*n2+4*n3+1*n4)/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;
    if(avg>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(avg>=5.0 || avg<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>n5;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<n5<<endl;
        double avg2 = (avg+n5)/2;
        if(avg2>=5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else if(avg2<=4.9)
        {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<avg2<<endl;
    }
    return 0;
}

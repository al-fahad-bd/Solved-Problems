#include <iostream>

using namespace std;

int main() {

    int i,num,c1=0,c2=0,c3=0,c4=0;
    for(i=0;i<5;i++)
    {
        cin>>num;
        if(num%2==0)
        {
            c1++;
        }
        if(num%2!=0)
        {
            c2++;
        }
        if(num>0)
        {
            c3++;
        }
        if(num<0)
        {
            c4++;
        }
    }
    cout<<c1<<" valor(es) par(es)"<<endl;
    cout<<c2<<" valor(es) impar(es)"<<endl;
    cout<<c3<<" valor(es) positivo(s)"<<endl;
    cout<<c4<<" valor(es) negativo(s)"<<endl;
    return 0;
}


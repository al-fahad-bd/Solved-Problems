#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int i,count=0;
    float num,sum=0,avg;
    for(i=0;i<6;i++)
    {
        cin>>num;
        if(num>0)
        {
            count++;
            sum = sum+num;
        }
    }
    avg = sum/count;
    cout<<count<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<avg<<endl;

    return 0;
}


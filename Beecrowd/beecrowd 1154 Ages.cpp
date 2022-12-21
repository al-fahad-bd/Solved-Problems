#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n,sum=0,count=0;
    float avg;
    while(true)
    {
        cin>>n;
        if(n<0)
        {
            break;
        }
        sum=sum+n;
        count++;
    }
    avg=(float)sum/count;
    cout<<fixed<<setprecision(2)<<avg<<endl;

    return 0;
}

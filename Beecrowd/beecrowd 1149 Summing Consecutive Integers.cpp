#include <iostream>

using namespace std;

int main() {

    int a,counter_n,i,sum=0;
    cin>>a>>counter_n;
    while(counter_n<=0)
    {
        cin>>counter_n;
    }
    for(i=0;i<counter_n;i++)
    {
        sum=sum+a;
        a++;
    }
    cout<<sum<<endl;


    return 0;
}

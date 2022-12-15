#include <iostream>

using namespace std;

int main() {

    int m,n,temp,i,sum;
    while(true)
    {
        cin>>m>>n;

        if(m<=0 || n<=0)
        {
            break;
        }
        if(m>n)
        {
            temp=m;
            m=n;
            n=temp;
        }
        sum=0;
        for(i=m;i<=n;i++)
        {
            sum = sum+i;

            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<endl;

    }

    return 0;
}

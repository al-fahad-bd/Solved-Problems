#include <iostream>

using namespace std;

int main() {

    int x,i,sum;

    while(true)
    {
        sum=0;
        cin>>x;
        if(x==0)
            break;
        if(x%2!=0)
            x++;
        for(i=1;i<=5;i++)
        {
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<endl;

    }
    return 0;
}

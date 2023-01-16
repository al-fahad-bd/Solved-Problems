#include <iostream>

using namespace std;

int main() {

    int n,x,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        int div=1,sum=0;
        while(div<x)
        {
            if(x%div==0)
            {
                sum=sum+div;
            }
            div++;
        }
        if(sum==x)
        {
            cout<<x<<" eh perfeito"<<endl;
        }
        else
        {
            cout<<x<<" nao eh perfeito"<<endl;
        }
    }
    return 0;
}

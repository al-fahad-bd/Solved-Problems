#include <iostream>

using namespace std;

int main() {

    int n,i,x,j,count;
    cin>>n;
    for(i=0;i<n;i++)
    {
        count=0;
        cin>>x;
        for(j=2;j<x;j++)
        {
            if(x%j==0)
            {
                count++;
            }

        }
        if(count>0)
        {
            cout<<x<<" nao eh primo"<<endl;
        }
        else
        {
            cout<<x<<" eh primo"<<endl;
        }
    }

    return 0;
}

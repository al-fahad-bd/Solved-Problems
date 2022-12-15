#include <iostream>

using namespace std;

int main() {

    int n,i,j,x,y,sum,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        sum=0;
        for(j=x+1; j<y; j++)
        {
            if(j%2!=0)
            {
                sum=sum+j;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}

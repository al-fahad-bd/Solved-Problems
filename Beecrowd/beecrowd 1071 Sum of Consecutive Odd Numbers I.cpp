#include <iostream>

using namespace std;

int main() {

    int i,x,y,sum=0;
    cin>>x>>y;
    if(x<=y)
    {
        for(i=x+1;i<y;i++)
        {
            if(i%2!=0)
            {
                sum = sum+i;
            }
        }
        cout<<sum<<endl;
    }
    else if(x>y)
    {
        for(i=x-1;i>y;i--)
        {
            if(i%2!=0)
            {
                sum = sum+i;
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}

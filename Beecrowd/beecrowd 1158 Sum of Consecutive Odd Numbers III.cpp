#include <iostream>

using namespace std;

int main() {

    int n,x,y,i,j,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x%2==0)
                x++;
        for(j=0;j<y;j++)
        {
            sum=sum+x;
            x+=2;
        }
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}

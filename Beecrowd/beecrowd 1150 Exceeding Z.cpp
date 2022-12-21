#include <iostream>

using namespace std;

int main() {

    int x,z,i,sum=0,count=1;
    cin>>x>>z;
    while(x>=z)
    {
        cin>>z;
    }
    for(i=x;i<z;i++)
    {
        sum=sum+i;
        if(sum>z)
            break;
        count++;
    }
    cout<<count<<endl;

    return 0;
}

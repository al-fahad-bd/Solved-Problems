#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int x,y,n,i=0;
    float division;
    cin>>n;
    while(i<n)
    {
        cin>>x>>y;
        if(y==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else
        {
            division=(float)x/(float)y;
            cout<<fixed<<setprecision(1)<<division<<endl;
        }
        i++;
    }

    return 0;
}

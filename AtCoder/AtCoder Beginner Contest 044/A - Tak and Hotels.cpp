#include<iostream>
using namespace std;
int main()
{
    int n,k,k2,x,y,cost;
    cin>>n>>k>>x>>y;
    if(n<=k)
    {
        cost=n*x;
    }
    else
    {
        k2=n-k;
        cost=(k*x)+(k2*y);
    }
    cout<<cost;
}

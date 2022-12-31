#include<iostream>
using namespace std;
int main()
{
    int n,candy,total=0;
    cin>>n;
    for(candy=1;candy<=n;candy++)
    {
        total+=candy;
    }
    cout<<total;
}

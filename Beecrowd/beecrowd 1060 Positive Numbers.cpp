#include <iostream>

using namespace std;

int main() {

    int i,count=0;
    float num;
    for(i=0;i<6;i++)
    {
        cin>>num;
        if(num>0)
        {
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl;

    return 0;
}

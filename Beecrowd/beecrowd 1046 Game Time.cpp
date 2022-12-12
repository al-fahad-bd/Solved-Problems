#include <iostream>

using namespace std;

int main() {

    int start_time,end_time,duration;
    cin>>start_time>>end_time;
    if(start_time==end_time)
    {
        duration = 24;
    }
    else if(start_time < end_time)
    {
        duration = end_time -start_time;
    }
    else if(start_time > end_time)
    {
        duration = (24 - start_time) + end_time;
    }
    cout<<"O JOGO DUROU "<<duration<<" HORA(S)"<<endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int ini_hour,ini_minute,final_hour,final_minute,duration,du_hour,du_minute;
    cin>>ini_hour>>ini_minute>>final_hour>>final_minute;
    duration = ((final_hour*60)+final_minute) - ((ini_hour*60)+ini_minute);
    if(duration<=0)
    {
        duration = duration+(24*60);
    }
    du_hour = duration/60;
    du_minute = duration%60;

    cout<<"O JOGO DUROU "<<du_hour<<" HORA(S) E "<<du_minute<<" MINUTO(S)"<<endl;

    return 0;
}


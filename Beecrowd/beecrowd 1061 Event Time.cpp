#include <iostream>

using namespace std;

int main() {

    string temp;
    int sd,sh,sm,ss,ed,eh,em,es;
    cin>>temp>>sd;
    cin>>sh>>temp>>sm>>temp>>ss;
    cin>>temp>>ed;
    cin>>eh>>temp>>em>>temp>>es;
    int st = ss + (sm*60) + (sh*60*60) + (sd*24*60*60);
    int et = es + (em*60) + (eh*60*60) + (ed*24*60*60);
    int duration = et - st;
    int du_d = duration/(24*60*60);
    duration = duration%(24*60*60);
    int du_h = duration/(60*60);
    duration = duration%(60*60);
    int du_m = duration/60;
    duration = duration%60;
    int du_s = duration;
    cout<<du_d<<" dia(s)"<<endl;
    cout<<du_h<<" hora(s)"<<endl;
    cout<<du_m<<" minuto(s)"<<endl;
    cout<<du_s<<" segundo(s)"<<endl;

    return 0;
}

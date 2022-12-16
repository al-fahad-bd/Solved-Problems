#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int count=0;
    float score,sum=0.0,avg;
    while(true)
    {
        cin>>score;
        if(score>=0.0 && score<=10.0)
        {
            count++;
            sum = sum+score;
        }
        if(count==2)
            break;
        else if(score<0.0 || score>10.0)
        {
            cout<<"nota invalida"<<endl;
        }
    }
    cout<<"media = "<<fixed<<setprecision(2)<<sum/2.0<<endl;

    return 0;
}

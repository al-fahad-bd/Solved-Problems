#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int count=0,x;
    float score,sum=0.0,avg;

    Repeat:
    {
        count=0;
        sum=0.0;
        while(true)
        {
            cin>>score;
            if(score<0.0 || score>10.0)
            {
                cout<<"nota invalida"<<endl;
            }
            else
            {
                sum=sum+score;
                count++;
                if(count==2)
                {
                    avg=sum/2;
                    cout<<"media = "<<fixed<<setprecision(2)<<avg<<endl;
                    do
                    {
                        cout<<"novo calculo (1-sim 2-nao)"<<endl;
                        cin>>x;
                        if(x==1)
                        {
                            goto Repeat;
                        }
                    }while(x!=2);
                    if(x==2)
                    {
                        break;
                    }
                }
            }
        }
    }





    return 0;
}

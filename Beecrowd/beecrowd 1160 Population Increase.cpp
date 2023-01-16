#include <iostream>

using namespace std;

int main() {

    int t,i,pa,pb,gpa,gpb,year;
    double g1,g2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        year=0;
        cin>>pa>>pb;
        cin>>g1>>g2;
        while(pa<=pb)
        {
            pa=pa+(pa*(g1/100));
            pb=pb+(pb*(g2/100));
            year++;
            //if we count year more than 100 we will get time limit exceeded error
            //so we have to break it after 100 count
            //for this purpose we have to use if statement inside this loop with a break with it
            if(year>100)
            {
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }

        }
        //last cout is printing after the first cout but we dont need this
        //so we have to stop it using a condition
        if(year<=100)
        {
            cout<<year<<" anos."<<endl;
        }

    }

    return 0;
}

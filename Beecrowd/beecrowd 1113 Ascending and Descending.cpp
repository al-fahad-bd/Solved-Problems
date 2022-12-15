#include <iostream>

using namespace std;

int main() {

    int x,y;
    while(true)
    {
        cin>>x>>y;
        if(x==y)
            break;
        else if(x>y)
        {
            cout<<"Decrescente"<<endl;
            //education, tech_skill, working_skill, soft_skill, project, acknowledgment,
        }
        else if(x<y)
        {
            cout<<"Crescente"<<endl;
        }
    }

    return 0;
}

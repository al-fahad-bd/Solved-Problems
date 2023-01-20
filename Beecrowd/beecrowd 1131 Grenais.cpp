#include <iostream>
using namespace std;

int main() {

    int inter,gremio,itr,numOfGrenais=0,victoriesOfInter=0,victoriesOfGremio=0,numOfDraws=0;
    while(itr!=2)
    {
        cin>>inter>>gremio;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>itr;
        numOfGrenais++;
        if(inter>gremio)
            victoriesOfInter++;
        else if(gremio>inter)
            victoriesOfGremio++;
        else if(inter==gremio)
            numOfDraws++;
    }
    cout<<numOfGrenais<<" grenais"<<endl;
    cout<<"Inter:"<<victoriesOfInter<<endl;
    cout<<"Gremio:"<<victoriesOfGremio<<endl;
    cout<<"Empates:"<<numOfDraws<<endl;
    if(victoriesOfInter>victoriesOfGremio)
        cout<<"Inter venceu mais"<<endl;
    if(victoriesOfGremio>victoriesOfInter)
        cout<<"Gremio venceu mais"<<endl;
    if(victoriesOfInter==victoriesOfGremio)
        cout<<"Não houve vencedor"<<endl;
    return 0;
}

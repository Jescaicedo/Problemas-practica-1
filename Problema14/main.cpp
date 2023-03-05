#include <iostream>

using namespace std;

int main()
{
    int pn=100, sn=100, resul=0, aux=0, sf=0, r=0, mp=0, mpn=0, spn=0;
    while (pn<1000){
        while (sn<1000){
            resul=pn*sn;
            aux=resul;
            while (aux!=0){
                r=aux%10;
                aux/=10;
                sf=(sf*10)+r;
            }
        if (sf==resul){
            if (resul>mp){
                mp=resul;
                mpn=pn;
                spn=sn;
            }
        }
        sf=0;
        sn+=1;
        }
    pn+=1;
    sn=pn;
    }
    cout<<mpn<<" * "<<spn<<" = "<<mp<<endl;
}

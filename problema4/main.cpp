#include <iostream>

using namespace std;

int main()
{
    bool ban=true;
    int tp=0, hp=0, mp=0, ts=0, hs=0, ms=0, ht=0, mt=0;
    while (ban){
        cout<<"Ingrese una hora: ";
        cin>>tp;
        mp=tp%100;
        hp=tp/100;
        if (tp<=2359 && mp<60 && tp>=0){
            ban=false;
            }
        else{
            cout<<"Ingrese una hora valida"<<endl;
            }
    }
    ban=true;
    while (ban){
        cout<<"Ingrese el tiempo que se le va a sumar a la hora: ";
        cin>>ts;
        ms=ts%100;
        hs=ts/100;
        if (ts<=2359 && ms<60 && ts>=0){
            ban=false;
            }
        else{
            cout<<"Ingrese una hora valida"<<endl;
            }

    }
    mt=mp+ms;
    if(mt>59){
        mt-=60;
        hp+=1;
    }
    ht=hp+hs;
    if (ht>23){
        ht-=24;
    }
    if (ht==0){
        cout<<"00";
    }
    ht=(ht*100)+mt;
    cout<<"La hora es: "<<ht<<endl;




}

#include <iostream>

using namespace std;

int main()
{
    int A= 0;
    cout<<"Ingrese un numero A: ";
    cin >> A;
    int cmil=0, vmil=0, dmil=0, cinmil=0;
    int dosmil=0, mil=0, quin=0, tre=0;
    int dos=0, cien=0, cin=0, res=0;
    while (A>0){
        if (A>=50000){
            A-=50000;
            cmil+=1;
        }
        else if(A>=20000){
            A-=20000;
            vmil+=1;
        }
        else if(A>=10000){
            A-=10000;
            dmil+=1;
        }
        else if(A>=5000){
            A-=5000;
            cinmil+=1;
        }
        else if(A>=2000){
            A-=2000;
            dosmil+=1;
        }
        else if(A>=1000){
            A-=1000;
            mil+=1;
        }
        else if(A>=500){
            A-=500;
            quin+=1;
        }
        else if(A>=200){
            A-=200;
            dos+=1;
        }
        else if(A>=100){
            A-=100;
            cien+=1;
        }
        else if(A>=50){
            A-=50;
            cin+=1;
        }
        else{
            res=A;
            A=0;
        }
    }
    cout<<"50000= "<<cmil<<endl<<"20000= "<<vmil<<endl<<"10000= "<<dmil<<endl<<"5000= "<<cinmil<<endl<<"2000= "<<dosmil<<endl<<"1000= "<<mil<<endl<<"500= "<<quin<<endl<<"200= "<<dos<<endl<<"100= "<<cien<<endl<<"50= "<<cin<<endl<<"Faltante= "<<res<<endl;
}

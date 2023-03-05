#include <iostream>

using namespace std;

int main()
{
    int N=0;
    cout<<"Ingrese el numero de divisores N del cual el numero sera mayor: ";
    cin>>N;
    int cont=1, sum=0, contd=0, num=0, divi=0;
    while (divi<=N){
        num=cont+sum;
        sum=num;
        cont+=1;
        divi=0;
        contd=0;
        while(contd<=num){
            contd+=1;
            if (num%contd==0){
                divi+=1;
            }
        }

    }
    cout<<"el numero es "<<num<<" que tiene "<<divi<<" divisores"<<endl;
}




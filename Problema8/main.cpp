#include <iostream>

using namespace std;

int main()
{
    int A=0, B=0, N=0;
    cout<<"Ingrese el primer numero: ";
    cin>>A;
    cout<<"Ingrese el segundo numero: ";
    cin>>B;
    cout<<"Ingrese el numero del cual tienen que ser menor los multiplos: ";
    cin>>N;
    int cont=1, mul=0, suma=0;
    mul= A*cont;
    while (mul<N){
        suma+=mul;
        cout<<mul;
        cont+=1;
        mul= A*cont;
        if (mul<N){
            cout<<" + ";
        }

    }
    cont=1;
    mul= B*cont;
    if ((suma!=0)&&(mul<N)&&(mul%A!=0)){
        cout<<" + ";
    }
    if ((mul<N)&&(mul%A!=0)){
        cout<<mul;
        suma+=mul;
        cont+=1;
    }
    mul= B*cont;
    while (mul<N){
        if (mul%A!=0){
        suma+=mul;
        cout<<" + "<<mul;
        }
        cont+=1;
        mul= B*cont;


    }
    cout<<" = "<<suma<<endl;
}

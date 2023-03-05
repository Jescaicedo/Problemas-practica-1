#include <iostream>

using namespace std;

int main()
{
    int N=0;
    cout<<"Ingrese la cantidad de terminos: ";
    cin>>N;
    int Mul=1, Con=1;
    float A=1, B=1, tot1=0, tot=1;
    while (Con<N){
        B*=Mul;
        tot1=A/B;
        Mul+=1;
        tot+=tot1;
        Con+=1;
    }
    cout<<tot<<endl;








}

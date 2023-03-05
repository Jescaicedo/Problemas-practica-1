#include <iostream>

using namespace std;

int main()
{
    int N=0;
    cout<<"Ingrese el numero N, del cual van a partir las semillas: ";
    cin>>N;
    int resul=0, contr=1, semilm=0, contm=0;
    for(int i=N; i>1 ;i--){
        while (N!=1){
            if (N%2==0){
                N/=2;
                contr+=1;
            }
            else if (N%2!=0){
                N=(N*3)+1;
                contr+=1;
            }
        }
        if (contr>contm){
            contm=contr;
            semilm=i;
        }
        N=i-1;
        contr=1;
    }
    cout<<"La serie mas larga es con la semilla "<<semilm<<" teniendo "<<contm<<" terminos"<<endl;

}

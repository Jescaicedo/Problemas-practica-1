#include <iostream>

using namespace std;

int main()
{
    int N=0;
    cout<<"Ingrese el numero N del cual busca el maximo factor primo: ";
    cin>>N;
    int contp=2, fa=0, contd=2;
    while (contp<=N){
        if (contp%contd==0){
            if (contd==contp){
                if (N%contp==0){
                    fa=contp;
                    contd=2;
                    contp+=1;
                }
                else{
                    contd=2;
                    contp+=1;
                }

            }
            else{
                contp+=1;
                contd=2;
            }
        }
        else{
            contd+=1;
        }

    }
    cout<<fa<<endl;


}

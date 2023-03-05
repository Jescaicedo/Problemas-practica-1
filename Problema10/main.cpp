#include <iostream>

using namespace std;

int main()
{
   int N=0;
   cout<<"Ingrese el numero primo N que desea imprimir: ";
   cin>>N;
   int divi=2, contp=2, ContN=1;
   while (divi<=contp){
   if (contp%divi==0){
       if (divi==contp){
           if (N==ContN){
               cout<<contp<<endl;
               break;

           }
           else{
               contp+=1;
               divi=2;
               ContN+=1;
           }
        }
       else{
           contp+=1;
           divi=2;
       }
   }
   else{
       divi+=1;
   }
   }

}

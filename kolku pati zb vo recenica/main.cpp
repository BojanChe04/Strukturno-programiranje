//dali zborot go imat vo nizata
#include <iostream>
#include <string>
#include<string.h>
#include<stdio.h>
#include<cstring>
using namespace std;
int main() {
    char niza[100]={' '};
    cout << "Vnesi go stringot" << endl;
    cin.getline(niza, 100);
    cout << "Vnesovte: " << endl;
    cout << niza << endl;
    int len = strlen(niza);
    //niza[len-1]='\0';
    //cout << "Dolzinata na stringot e " << len << endl;
    cout<<"Vnesi go zborot "<<endl;
    char zbor[100]={' '};
    cin.getline(zbor,100);
    cout<<"Vnesovte "<<endl;
    cout<<zbor<<endl;
    int brojac=0;
    int lenZbor=strlen(zbor);
    for (int i = 0; i <= len-lenZbor; ++i) {
        int flag=true;
        for (int j = 0; j < lenZbor; ++j) {
            if(niza[i+j]!=zbor[j]){
                flag=false;
                break;
            }
        }
        if(flag){
           brojac++;
        }
    }
    cout<<"ZBorot se povtoruva "<<brojac<<" pati"<<endl;
    return 0;
}

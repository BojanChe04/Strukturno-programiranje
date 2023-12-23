//kolku zboroj
//da se ispecatit najdolgiot zbor
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    char niza[100];
    cin.getline(niza,100);
    cout<<"vnesovte"<<endl;
    cout<<niza<<endl;
    int len=strlen(niza);
    int brojacZboroj=1;
    for (int i = 0; niza[i]!='\0'; ++i) {
        if(isspace(niza[i])){
            brojacZboroj++;
        }
    }
    cout<<"Broj nazborovi "<<brojacZboroj<<endl;
    char zbor[100];
    char maxZbor[100];
    int brojac=0;
    int max=0;
    for (int i = 0; niza[i]!='\0'; ++i) {
        if(!isspace(niza[i])){
            zbor[brojac++]=niza[i];
        }
        else{
            zbor[brojac]='\0';
            if(brojac>max){
                max=brojac;
                strcpy(maxZbor,zbor);
            }
            brojac=0;
        }
    }
    zbor[brojac]='\0';
    if(brojac>max) {
        max = brojac;
        strcpy(maxZbor, zbor);
    }
    cout << "najdolg zbor " << maxZbor << endl;
    cout << "dolzina " << max << endl;
 return 0;
}

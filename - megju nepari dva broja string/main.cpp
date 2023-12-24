#include<bits/stdc++.h>
#include <iostream>
using namespace std;
bool daliENeparen(char c){
    if(c=='1' || c=='3' || c=='5' || c=='7' || c=='9'){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    char niza[100];
    cin.getline(niza,100);
    cout<<"vnesovte"<<endl;
    cout<<niza<<endl;
    int len=strlen(niza);
    char nova[100];
    int brojac=0;
    for (int i = 0; i < len; ++i) {
        nova[brojac++]=niza[i];
        if(daliENeparen(niza[i]) && daliENeparen(niza[i+1])){
            nova[brojac++]='-';
           //. cout<<"Dva neparni"<<endl;
        }

    }
    cout<<nova<<endl;
    return 0;
}

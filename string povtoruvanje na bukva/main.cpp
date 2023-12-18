//kolku pati se pojavila dadena bukva vo zbor
#include <iostream>
#include<cstring>
#include<string>
#include<stdio.h>
using namespace std;
int brojac(string zbor, char bukva ) {
    int br=0;
    for (int i = 0; i < zbor.length(); ++i) {
        if(zbor[i]==bukva) {
            br++;
        }
    }
    return br;
}
int main() {
    string zbor;
    cin>>zbor;
    cout<<zbor<<endl;
    char bukva;
    cin>>bukva;
    cout<<brojac(zbor,bukva)<<endl;
    return 0;
}
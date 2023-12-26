#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    char recenica[100];
    char bukva;
    cin.getline(recenica,100);
    cin>>bukva;
    int len=strlen(recenica);
    int indexX;
    int indexY;
    for (int i = 0; i < len; ++i) {
        if(recenica[i]==bukva){
            indexX=i;
            break;
        }
    }
    for (int i = len-1; i >=0 ; --i) {
        if(recenica[i]==bukva){
            indexY=i;
            break;
        }
    }
    for (int i = indexX; i <= indexY ; ++i) {
        cout<<recenica[i];
    }
    return 0;
}

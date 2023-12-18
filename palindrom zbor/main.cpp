//dali e palindrom
#include <iostream>
#include<cstring>
#include<string>
#include<stdio.h>
#include<ctype.h>
using namespace std;

int main() {
    char ch, niza[20];
    int i;
    for (i = 0; i < 20 && (ch=getchar())!='\n'; ++i) {
        niza[i]=ch;
    }
    niza[i]='\0';
    char p=niza[i];
    int q=i-1;
    bool flag=true;
    for (int j = 0; j <20 && niza[j]!=p ; ++j) {
        if(niza[j]!=niza[q])
        {
            flag=false;
            break;
        }
        q--;
    }
    if(flag)
    {
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"ne e plindrom"<<endl;
    }
    return 0;
}
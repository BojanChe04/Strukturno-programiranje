//kolku pati se pojavila dadena bukva vo zbor
#include <iostream>
#include<cstring>
#include<string>
#include<stdio.h>
#include<ctype.h>
using namespace std;

int main() {
    char ch, niza[20], a;
    int br=0;
    int i=0;
    for (i = 0; i < 20 && (ch=getchar())!='\n'; ++i) {
        niza[i]=ch;
    }
    niza[i]='\0';
    for (int j = 0; j < 20 && (niza[i]!='\n'); ++j) {
        if(niza[j]== ' ')
        {
            br++;
        }
    }
    cout<<br+1;
    return 0;
}
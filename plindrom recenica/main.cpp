
#include <iostream>
#include<cstring>
#include<string>
#include<stdio.h>
#include<ctype.h>
#include<iomanip>
using namespace std;
int main() {
    char ch, niza[20];
    string bukvi;
    int i;
    for (i = 0; i < 20 && (ch = getchar()) != '\n'; ++i) {
        niza[i] = ch;
    }
    int q = i - 1;
    bool flag=true;
    int a = 0;
    for (int j = 0; j < q; ++j) {
        if(isalpha(niza[j])){
            bukvi+=tolower(niza[j]);
        }
    }
    int z=bukvi.length()-1;
    while (a < z) {
        if (toupper(bukvi[a]) != toupper(bukvi[z])) {
            flag=false;
            break;
        }
        a++;
        z--;
    }
    if(flag) {
        cout<<"palindron"<<endl;
    }
    else{
        cout<<"ne e palindrom"<<endl;
    }
    return 0;
}

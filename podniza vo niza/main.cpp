//podniza vo niza
#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main() {
    cout<<"vnesi ja nizata "<<endl;
    char ch, niza[20];
    int i;
    for (int i = 0; i < 20 && (ch = getchar()) != '\n'; ++i) {
        niza[i] = ch;
    }
    int q = i - 1;
    string kraj=niza;
    //---------------------------------------------------
    cout<<"vnesi ja podnizata "<<endl;
    char ch1, podniza[20];
    for (i = 0; i < 20 && (ch1 = getchar()) != '\n'; ++i) {
        podniza[i] = ch1;
    }
    string kraj1=podniza;
    int flag;
    char nova[20];
    int brojac;
    for (int i = 0; i < q; ++i)
    {
        for (int j = i; j < q; ++j)
        {
            brojac = 0;
            flag = 1;
            for (int k = i; k <= j; ++k) {
                nova[brojac++] = niza[k];
            }
            for (int p = 0; p < brojac; ++p) {
                if (nova[p] != podniza[p]) {
                    flag = 0;
                }
            }
            if (flag) {
                cout << kraj1 << " e podniza na tekstualnata niza: " <<kraj<< endl;
                return 0;
            }
        }
    }
    cout<<kraj1<<" ne e podniza na tekstualnata niza: "<<kraj<<endl;
    return 0;
}
#include <iostream>
#include<cstring>
#include <string>
#include<string.h>
#include<stdio.h>
using namespace std;
bool daliSeIsti(char niza1[], char niza2[], int length){
    for (int i = 0; i < length; ++i) {
        if(niza1[i]!=niza2[i]){
            return false;
        }
    }
    return true;
}
int main() {
   char niza[100];
   cin.getline(niza,100);
   char podniza[100];
   char rezultat[100];
   int brojac = 0;
   cin.getline(podniza,100);
   int lenNiza=strlen(niza);
   int lenPodniza=strlen(podniza);

    for (int i = 0; i <lenNiza; ++i) {
        char zbor[100];
        int br = 0;
        for (int j = 0; j <lenPodniza; ++j) {
            zbor[j]=niza[j+i];
            /*br++;*/
        }
        if(daliSeIsti(podniza, zbor, lenPodniza)){
            i+=lenPodniza;
        }else{
            rezultat[brojac++] = niza[i];
        }
       /* for (int j = 0; j < br; ++j) {
            cout<<zbor[j];
        }
        cout<<endl;*/
    }
    for (int i = 0; i <= brojac; ++i) {
        cout<<rezultat[i];
    }
    return 0;
}


/*#include <iostream>
#include<cstring>
#include <string>
#include<string.h>
#include<stdio.h>
using namespace std;
int main() {
    char niza[100];
    char maxNiza[100];
    while(niza[0]!='0'){
        int indexI;
        int indexJ;
        int maxLen;
        char nova[100];
        int brojac=0;
        cin.getline(niza,100);
        int len=strlen(niza);
        for (int i = 0; i < len; ++i) {
            maxLen=-1;
            for (int j = len; j >=0 ; --j) {
                if(i<j){
                    if(isdigit(niza[i]) && isdigit(niza[j])){
                        break;
                    }
                }
                 indexI=i;
                 indexJ=j;
                 break;
            }
        }
        for (int i = indexI; i < indexJ; ++i) {
            nova[brojac++]=niza[i];
        }
        if(brojac>maxLen){
            maxLen=brojac;
            strcpy(maxNiza,nova);
        }
    }
    cout<<maxNiza<<endl;
    return 0;
}
 */
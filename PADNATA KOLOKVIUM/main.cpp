#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;
// poradi ova glupa zadaca odam na ispit :(
//koloku pati imat posledovatelni soglaski
int posledovatelniSoglaski (char niza[], int len){
    int povtoruvanja=0;
    for (int i = 0; i < len; ++i) {
        int soglaski=0;
        if(!isspace(niza[i]) && tolower(niza[i]) != 'a' && tolower(niza[i]) != 'e' && tolower(niza[i]) != 'i' && tolower(niza[i]) != 'o'  && tolower(niza[i]) != 'u'){
            for (int j = i; j < len; ++j) {
                if (!isspace(niza[i]) && tolower(niza[j]) != 'a' && tolower(niza[j]) != 'e' && tolower(niza[j]) != 'i' &&
                    tolower(niza[j]) != 'o' && tolower(niza[j]) != 'u') {
                    soglaski++;
                    i++;
                }
                else{
                    break;
                }
            }
        }
        if(soglaski > 2){
            povtoruvanja++;
        }
    }
    return povtoruvanja;
}
int maxPovtorvenje(int niza[], int n){
    int max=-1;
    for (int i = 0; i < n; ++i) {
        if(niza[i]>max){
            max=niza[i];
        }
    }
    return max;
}
int funkcija(int element, int niza[], int n){
    int brojac=0;
    for (int i = 0; i < n; ++i) {
        if(niza[i]==element){
            brojac++;
        }
    }
    return brojac;
}
int main() {
    int brNaNizi;
    int povtoruvanja[100], brojacPov=0;
    char niza[100];
    cin>>brNaNizi;
    cin.ignore();
    for (int i = 0; i < brNaNizi; ++i) {
        cin.getline(niza,100);
        int len=strlen(niza);
       //cout<<"recenicata ima "<<posledovatelniSoglaski(niza,len)<<" povtoruvanja na soglaski"<<endl;
        povtoruvanja[brojacPov++] = posledovatelniSoglaski(niza,len);
    }
   /* for (int i = 0; i < brojacPov; ++i) {
        cout<<povtoruvanja[i]<<" ";
    }*/
    int max;
    max = maxPovtorvenje(povtoruvanja,brojacPov);
    for (int i = 0; i <= max ; ++i) {
        cout<<funkcija(i,povtoruvanja,brojacPov)<<" : "<<i<<endl;
    }
    return 0;
}

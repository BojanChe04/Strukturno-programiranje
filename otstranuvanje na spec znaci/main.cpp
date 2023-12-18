#include <iostream>
using namespace std;
int main() {
    char ch, niza[20];
    int i=0;
    for (i = 0; i < 20 && (ch=getchar())!='\n'; ++i) {
        niza[i]=ch;
    }
    int q=i-1;
    string nova;
    for (int i = 0; i <=q; ++i) {
        if(isalpha(niza[i]))
        {
            if(niza[i]==toupper(niza[i])){
                nova+=tolower(niza[i]);
            }
            else{
                nova+=toupper(niza[i]);
            }
        }
    }
    cout<<nova<<endl;
    return 0;
}

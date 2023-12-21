#include <iostream>
using namespace std;
int main() {
   int n;
   int niza[100];
   cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }
    int nova[100];
    int br=0;
    for (int i = 0; i < n; ++i) {
        int zb=0;
        for (int j = i; j >=0 ; --j) {
            zb+=niza[j];
        }
            nova[br++]=zb;
    }
    for (int i = 0; i < br; ++i) {
        cout<<nova[i]<<" ";
    }
    return 0;
}

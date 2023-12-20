#include <iostream>
using namespace std;
int main() {
   int n;
   int niza[100];
   cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }
    int m;
    int miza[100];
    cin>>m;
    for (int i = 0; i < m; ++i) {
        cin>>miza[i];
    }
    int i,j;
    int k=0;
    int sort[100];
    for ( i = 0,  j=0; i<n && j<m;) {
        if(niza[i]<miza[j]) {
            sort[k++]=niza[i++];
        }
        else{
            sort[k++]=miza[j++];
        }
    }
    while(i<n){
        sort[k++]=niza[i++];
    }
    while(j<m){
        sort[k++]=miza[j++];
    }

    for(int z=0; z<n+m; z++){
        cout<<sort[z]<<" ";
    }
    return 0;
}

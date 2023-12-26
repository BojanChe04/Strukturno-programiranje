//site negovi prosti mnoziteli
//228=2x2x3x19x1
#include <iostream>
using namespace std;
int NZD(int a, int b){
    int temp;
    while(b>0) {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int NZD (int a, int b){
    return (a*b)/ NZD(a,b);
}
int main ()
{
    int nzd;
    int niza[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>niza[i];
    }
    nzd=nzd(niza[0], niza[1]);
    for (int i = 0; i < n; ++i) {
       nzd=NZD(nzd, niza[i]);
    }
    int nzs=NZD(niza[0],niza[1]);
    for (int i = 0; i <n ; ++i) {
        nzs=NZS(nzs,niza[i]);
    }
    cout<<"nzd e"<<nzd<<endl;
    cout<<"nzs e"<<nzs<<endl;
    return 0;
}
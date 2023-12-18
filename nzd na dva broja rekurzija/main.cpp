//nzd na dva broja
//a>b
#include <iostream>
using namespace std;
int funkcija(int a, int b) {
    if(a==0) {
        return b;
    }
    return funkcija(b%a,a);
}
int main() {
    int a, b;
    cin>>a>>b;
    cout<<funkcija(a,b);
    return 0;
}

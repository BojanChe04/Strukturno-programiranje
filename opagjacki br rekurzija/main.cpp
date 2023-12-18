//zbir na cifri na parni pozicii
//so rekurzivna funkcija
#include <iostream>
using namespace std;
int funk(int n,int pozicija, int zbir) {
    if(n==0) {
        return zbir;
    }
    if(pozicija%2==0) {
        zbir+=n%10;
    }
    return funk(n/10,pozicija+1,zbir);
}
int main() {
    int n;
    cin>>n;
    cout<<funk(n,1,0);
    return 0;
}

//presmetvis zbir na cifri pomali od 5
//go pecatis brojot so najgolem zbir
#include <iostream>
using namespace std;
/*int zbirPomalOd5 (int broj){
    int sum=0;
    while(broj>0){
        if(broj%10<5){
            sum+=broj%10;
        }
        broj/=10;
    }
    return sum;
}*/
int zbirPomalOd5(int broj,int suma){
    if(broj<=0){
        return suma;
    }
    if(broj%10<5){
     suma+=broj%10;
    }
    broj/=10;
    return zbirPomalOd5(broj,suma);
}
int main() {
    int n,broj,maxbrZbir;
    int max=-999999;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>broj;
        int zbir;
        zbir= zbirPomalOd5(broj,0);
        if(zbir>max){
            max=zbir;
            maxbrZbir=broj;
        }
    }
    cout<<"broj "<<maxbrZbir<<" so zbir "<<max<<endl;
    return 0;
}

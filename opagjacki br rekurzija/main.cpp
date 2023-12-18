//rekurzija
//brovervit brojov dali e vo opagjacki redosle
//ako e vrakjat 1 vo sprotivo 0
#include <iostream>
using namespace std;
int funkcija(int broj){
    if(broj<10){
        return 1;
    }
    if(broj%10<broj/10%10){
        return 1;
    }
    else if(broj%10>broj/10%10){
        return 0;
    }
    else{
        return funkcija(broj/10);
    }
}
int main() {
    int n;
    cin>>n;
    int broj;
    while(n>0)
    {
        cin>>broj;
        cout<<funkcija(broj)<<endl;
        n--;
    }
    return 0;
}
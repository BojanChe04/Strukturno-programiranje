#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    char zbor[100];
    cout<<"vnesi zbor"<<endl;
    cin.getline(zbor,100);
    cout<<"vnesovte "<<zbor<<endl;
    int len=strlen(zbor);
    for (int i = 0; i < len; ++i) {
        if(isalpha(zbor[i])){
            if(islower(zbor[i])){
                zbor[i]=(zbor[i]-'a'+1)%26+'a';
            }
            else if(isupper(zbor[i])){
                zbor[i]=(zbor[i]-'A'+1)%26+'A';
            }
        }
    }
    cout<<"noviot zbor e "<<endl;
    cout<<zbor<<endl;
    return 0;
}

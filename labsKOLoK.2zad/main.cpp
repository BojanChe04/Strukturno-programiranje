#include <iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
bool zaEdnakvoo(char niza[],  char bukva, int pozBukva){
    return niza[pozBukva] == bukva;
}
bool zaPluskaa(char niza[], int len, char bukva){
    for (int i = 0; i < len; ++i) {
        if(niza[i]==bukva){
            return true;
        }
    }
    return false;
}

int main() {
    char part1[100];
    char part2[100];
    char mix[100];
    int brojac=0;
    cin.getline(part1,100);
    cin.getline(part2,100);
    int len1= strlen(part1);
    int len2= strlen(part2);
    for (int i = 0; i < len1; ++i) {
        if(zaEdnakvoo(part2, part1[i], i)){
            mix[brojac++] = '=';
        }else if(zaPluskaa(part2, len2, part1[i])){
            mix[brojac++] = '+';
        }else if(!zaPluskaa(part2, len2, part1[i])){
            mix[brojac++] = '-';
        }
    }
    for (int i = 0; i < brojac; ++i) {
        cout<<mix[i];
    }
    return 0;
}




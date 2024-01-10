#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int matrix[100][100];
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>matrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        int glavna=0;
        int sporedna=0;
        bool flag=true;
        for (int j = 0; j < n; ++j) {
            if(i==j){
                glavna=matrix[i][j];
            }
            if (i + j == n - 1) {
                sporedna = matrix[i][j];
            }
        }
        int zb=glavna+sporedna;
        int br=sqrt(zb);
        if(br*br!=zb){
            flag=false;
        }
        if(flag){
            cout<<glavna<<"  +  "<<sporedna<<"  pravat poln kvadrat"<<endl;
        }
    }
    return 0;
}
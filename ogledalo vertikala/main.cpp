#include <iostream>
using namespace std;
int main() {
    int redici, koloni;
    int matrix[100][100];
    cin>>redici>>koloni;
    for (int i = 0; i < redici; ++i) {
        for (int j = 0; j < koloni; ++j) {
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    for (int i = 0; i < redici; ++i) {
        for (int j = 0; j < koloni; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int brojac=0;
    for (int i = 0; i < redici; ++i) {
        for (int j = koloni-1; j >=0 ; --j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

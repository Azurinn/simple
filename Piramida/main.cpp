#include <iostream>
#include <string>
using namespace std;

int main () {
    string ciag{};
    cout << "Podaj ciag znakow: ";
    getline(cin,ciag);
    size_t dlugosc = ciag.length();
    //cout << "Wyraz to: "<< ciag <<" Jego dlugosc wynosi: "<< dlugosc;
    for (size_t i=0; i < dlugosc; i++){
        for(size_t j=i; j < dlugosc -1; j++){
            cout <<" ";
        }
        for(size_t j=0; j<=i; j++){
            cout << ciag[j];
            if (j<i){
                cout<< " ";
            }
        }
        for(int j =i-1; j>= 0; --j){
            cout << " "<< ciag[j];
        }
        cout <<endl;
    }
    return 0;
    }
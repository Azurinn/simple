#include <iostream>
#include <string>

using namespace std;

int main () {

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    
    cout << "Podaj swoje slowo: ";
    string secret_message{};
    getline(cin,secret_message);
    
    cout << "Czy chcesz zmienic wielkosc liter? (Y/N): ";
    char choose{};
    cin >> choose;
    string encrypted_message;
    if (choose == 'y' || choose == 'Y'){
        for(char c: secret_message){
            size_t position = alphabet.find(c);
            if(position != string::npos){
                char new_char {key.at(position)};
                encrypted_message += new_char;
            }
            else{
                encrypted_message += c;
            }
        }
        cout << "Twoje slowo po zmianie to: " << encrypted_message;
    }
    else{
        cout <<"Okej twoje slowo bez zmian to: " <<secret_message; 
    }
    
    
    return 0;
    }
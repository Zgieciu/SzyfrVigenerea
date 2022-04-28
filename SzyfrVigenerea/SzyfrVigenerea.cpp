#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

//funkcja do szyfrowania, argumenty to tekst do zaszyfrowania i klucz szyfru, zwraca zaszyfrowany tekst
string encryption(string text, string key) {
  

    return text;
}

//funkcja do odszyfrowania, argumenty to tekst do odszyfrowania i klucz szyfru, zwraca odszyfrowany tekst
string decryption(string text, string key) {
   

    return text;
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
    int option;
    string text, key;

    string tabLowercase[26][26];
    string tabUppercase[26][26];
    int pom;

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            pom = j + i + 97;
            if (pom > 122) pom -= 26;
            tabLowercase[i][j] = pom;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            pom = j + i + 65;
            if (pom > 90) pom -= 26;
            tabUppercase[i][j] = pom;
        }
    }
   
    cout << "Szyfr Vigenere'a" << endl;

    do {
        
        cout << endl << "Wybierz opcję 1/2:" << endl;
        cout << "1. Szyfrowanie" << endl;
        cout << "2. Deszyfrowanie" << endl;
        cout << "3. Zakończ program" << endl;
        cout << endl;

        do {
            cin >> option;
            if (option == 1) {
                cout << "Wybrno szyfrowanie\n";                  
            }

            else if (option == 2) {
                cout << "Wybrano deszyfrowanie\n";
            }

            else if (option == 3) {
                cout << "Zakończono działanie programu.\n";
                break;
            }

            else {
                cout << "Wybierz opcje 1, 2 lub 3\n";
            }
        } while (option != 1 && option != 2 && option != 3);

    } while (option != 3);

    return 0;
}

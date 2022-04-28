#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

char tabLowercase[26][26];
char tabUppercase[26][26];

//funkcja do szyfrowania, argumenty to tekst do zaszyfrowania i klucz szyfru, zwraca zaszyfrowany tekst
string encryption(string text, string key) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 65 && text[i] <= 90) { // duże litery
            text[i] = tabUppercase[text[i] - 65][key[i] - 65];
        }
        else if (text[i] >= 97 && text[i] <= 122) { // małe litery 
            text[i] = tabLowercase[text[i] - 97][key[i] - 97];
        }
    }

    return text;
}

//funkcja do odszyfrowania, argumenty to tekst do odszyfrowania i klucz szyfru, zwraca odszyfrowany tekst
string decryption(string text, string key) {
   

    return text;
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
    int option, pom;
    string text, key;

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
                cout << "\nPodaj tekst do zaszyfrowania:\n";
                getline(cin >> ws, text);
                cout << "\nPodaj klucz szufru:\n";
                getline(cin >> ws, key);
                text = encryption(text, key);
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

            cout << "\nTekst po przejściu przez szyfr Vigenere'a:" << endl;
            cout << text << endl;

        } while (option != 1 && option != 2 && option != 3);

    } while (option != 3);

    return 0;
}

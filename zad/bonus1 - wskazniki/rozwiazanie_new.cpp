#include <iostream>
using namespace std;

int main() {
    int *tablica;
    int rozmiar;

    cout << "Podaj rozmiar tablicy: ";
    cin >> rozmiar;

    // Alokacja pamięci
    tablica = new int[rozmiar];

    // Wczytywanie danych do tablicy
    for(int i = 0; i < rozmiar; i++) {
        cout << "Wpisz element tablicy [" << i << "]: ";
        cin >> tablica[i];
    }

    // Wypisywanie elementów tablicy
    cout << "Elementy tablicy: ";
    for(int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }

    // Zwolnienie zaalokowanej pamięci
    delete[] tablica;

    return 0;
}

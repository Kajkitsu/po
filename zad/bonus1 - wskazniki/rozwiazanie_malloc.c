#include <stdio.h>
#include <stdlib.h>

int main() {
    int *tablica;
    int rozmiar, i;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &rozmiar);

    // Alokacja pamięci
    tablica = (int *)malloc(rozmiar * sizeof(int));

    // Sprawdzenie, czy alokacja się powiodła
    if(tablica == NULL) {
        printf("Nie udalo sie zaalokowac pamieci.\n");
        return 1;
    }

    // Wczytywanie danych do tablicy
    for(i = 0; i < rozmiar; i++) {
        printf("Wpisz element tablicy [%d]: ", i);
        scanf("%d", &tablica[i]);
    }

    // Wypisywanie elementów tablicy
    printf("Elementy tablicy: ");
    for(i = 0; i < rozmiar; i++) {
        printf("%d ", tablica[i]);
    }

    // Zwolnienie zaalokowanej pamięci
    free(tablica);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SORHOSSZ 100
int main()
{
    char sor[MAX_SORHOSSZ];
    char c;
    int sorhossz = 0;
    while ((c=getchar()) != '\n') {
        sor[sorhossz] = c;
        sorhossz++;
        // sor[sorhossz++] = c; -- Ez ugyanaz, mint a fenti két sor
    }

    for (int i=0; i<sorhossz; i++) {
        printf("%c", sor[i]);
    }
    printf("\n");

    bool talalt = false;
    int talalatIndexe;
    for (int i=0; i<sorhossz; i++) {
        if (sor[i] == 'a') {
            talalt = true;
            talalatIndexe = i;
            break; // Mert az elso elofordulast keresem
                    // break nelkul az utolsó előfordulást találja meg!!!
        }
    }

    if (talalt) {
        printf("Van 'a' karakter a szövegben, a %d. indexnél\n", talalatIndexe);
    } else {
        printf("Nincs a szövegben 'a' karakter\n");
    }

    int szavakSzama;
    if (sorhossz == 0) {
        szavakSzama = 0;
    } else {
        szavakSzama = 1;
    }
    for (int i=0; i<sorhossz; i++) {
        if (sor[i] == ' ') {
            szavakSzama++;
        }
    }
    printf("A szavak száma: %d\n", szavakSzama);

    return 0;
}







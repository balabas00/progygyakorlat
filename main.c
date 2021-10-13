#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NEVLEGES_SULY 100

int main()
{
    int termekek[] = {102, 97, 98, 101, 94, 105, 98, 101, 99, 102};
    int termekekSzama = sizeof(termekek) / sizeof(int);

    bool ok;
    int tures;
    char c;
    do {
        ok = true;
        if (scanf("%d", &tures) !=1 || tures <1 || tures >10){
            ok = false;
            printf("Hibás adat!\n");
            while ((c=getchar()) != '\n');
        }
    } while (!ok);

    printf("Termékek tömege: ");
    for (int i=0; i<termekekSzama; i++) {
        printf("%d ", termekek[i]);
    }
    printf("\n");

    //printf("A tures: %d\%\n", tures);
    int megengedettElteres = NEVLEGES_SULY * tures / 100;
    int alsohatar = NEVLEGES_SULY - megengedettElteres;
    int felsohatar = NEVLEGES_SULY + megengedettElteres;
    printf("A megfelelőség határai: %d - %d\n",
        alsohatar, felsohatar);

    int maxindex = 0;
    for (int i=0; i<termekekSzama; i++) {
        if (termekek[i] > alsohatar && termekek[i] < felsohatar &&
            termekek[i] > termekek[maxindex]) {
                maxindex = i;
                printf("maxindex: %d", maxindex);
        }
    }


    printf("A megfelelő termék sorszáma: %d, súlya: %d ",
            maxindex+1, termekek[maxindex]);
    printf("Eltérések: ");
    for (int i=0; i<termekekSzama; i++) {
        printf("%d ", termekek[i] - NEVLEGES_SULY);
    }
    // A selejt összsúlya
    int selejtekSulya = 0;
    int selejtekDarab = 0;
    for (int i=0; i<termekekSzama; i++) {
        if (termekek[i] < alsohatar || termekek[i] > felsohatar) {
        selejtekSulya += termekek[i];
        selejtekDarab++;
        }
    }
    printf("A selejtek összsúlya: %d \n", selejtekSulya);

    // A selejtek átlagsúlya
    if (selejtekDarab >0) {
        printf("A selejtek átlagsúlya: %d\n", selejtekSulya / selejtekDarab);
    } else {
        printf("Hurrá, nincs selejt!!\n");
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //tömbkezelés
    //pár alap algoritmus

    int bekertSzam, masikSzam, harmadikSzam;
    int bekertAdatokDarabszama;
    int joAdatVoltE;
    int veletlenSzam;

    //Random velObjektum = new Random();
    // int veletlenSzam = velObjektum.NextInt();

    int alsoHatar = 10;
    int felsoHatar = 35;

    srand(time(0));
    veletlenSzam = rand() % (felsoHatar - alsoHatar + 1) + alsoHatar;
    printf("vel.szam: %d\n", veletlenSzam);



    //harmadikSzam = 5;

  /*  while (harmadikSzam >3)//feltétel
    {
        printf("Szamitott ertek: %d", harmadikSzam * 3);
        harmadikSzam--;
        //feltétel
    }
    */

    /*joAdatVoltE = 0;

    do
    {//ciklusmag

    printf("Kerem adjon meg egy egesz szamot!\n");
    printf("");
    bekertAdatokDarabszama = scanf("%d, %d, %d", &bekertSzam, &masikSzam, &harmadikSzam);


    if (bekertAdatokDarabszama != 3)
    {
        printf("hibas adatok!\n");
    }
    else
    {
        if(bekertSzam < 1 || bekertSzam > 3)
        {//1, 2, 3
            printf("1 .szam csak 1, 2, 3 lehet\n");
        }
        else if (masikSzam < 5 || masikSzam > 7)
        {// 5, 6, 7
            printf("2. szam csak 5, 6, 7 lehet\n");
        }
        else
        {
            joAdatVoltE = 1;
        }

    }
    // puffer üritése
    while(getchar() != '\n');
}while(!joAdatVoltE);//feltétel

*/

/*
    printf("db: %d\n", bekertAdatokDarabszama);


    if (bekertAdatokDarabszama > 0)// feltétel
    {//igaz ag

            if(bekertAdatokDarabszama == 1)
            {
                printf("Csak 1 valt: %d\n", bekertSzam);
            }
            else
            {
                printf("%d - %d\n", bekertSzam, masikSzam);
            }

        printf("igaz ag\n");
        printf("bekertunk adatokat\n");
    }
        else
            {//hamis ag
            printf("hamis ag\n");
            printf("nincs adat\n");

            }


      if (bekertAdatokDarabszama > 0)// feltétel
    {//igaz ag


            if(bekertAdatokDarabszama == 1)
            {
            printf("Csak 1 valt: %d\n", bekertSzam);

            }
            else if (bekertAdatokDarabszama == 2)

            {
                printf("%d - %d\n", bekertSzam, masikSzam);
            }
            else if (bekertAdatokDarabszama == 3)
            {
                printf("3 adat volt megadva\n");
            }

    }
        else
            {//hamis ag
            printf("nincs adat\n");

            }
*/
/*
            switch (bekertAdatokDarabszama)
            {

                case 1:
                    printf("Csak 1 valt: %d\n", bekertSzam);
                    break;

                case 2:
                     printf("%d - %d\n", bekertSzam, masikSzam);
                     break;

                case 3:
                    printf("3 adat volt megadva\n");
                    break;

                default:
                    printf("nincs adat\n");
                    break;

            }
*/

    return 0;
}

#include <stdio.h>

int main()
{
    int jml, i;
    int array[100];
    char end = 'y';

    do
    {
        printf("+------------------------------------------------+\n");
        printf("|                 |||||||||||||||||||||          |\n");
        printf("|              |||||||||||||||||||||             |\n");
        printf("|             |||||       |||||||                |\n");
        printf("|                      |||||||                   |\n");
        printf("|                   |||||||                      |\n");
        printf("|                |||||||       |||||             |\n");
        printf("|             |||||||||||||||||||||              |\n");
        printf("|          |||||||||||||||||||||                 |\n");
        printf("+================================================+\n");
        system("cls");

        printf("Masukkan jumlah elemen array: ");
        scanf("%d", &jml);

        printf("Masukkan nilai elemen array:\n");
        for (i = 0; i < jml; i++)
        {
            scanf("%d", &array[i]);
        }

        int jumlah = 0;
        for (i = 0; i < jml; i++)
        {
            jumlah += array[i];
        }

        printf("Hasil penjumlahan seluruh elemen array: %d\n", jumlah);

        printf("hitung kembali?(y/n) : ");
        scanf(" %c", &end);
    } while (end == 'y' || end == 'Y');

        return 0;
    }

#include <stdio.h>

double hitungKelilingPersegi(double sisi)
{
    return 4 * sisi;
}

double hitungLuasPersegi(double sisi)
{
    return sisi * sisi;
}

double hitungVolumeKubus(double sisi)
{
    return sisi * sisi * sisi;
}

int main()
{
    double susi;
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

        printf("Masukkan panjang sisi: ");
        scanf("%lf", &susi);

        printf("Keliling persegi: %.2lf\n", hitungKelilingPersegi(susi));
        printf("Luas persegi: %.2lf\n", hitungLuasPersegi(susi));
        printf("Volume kubus: %.2lf\n", hitungVolumeKubus(susi));

        printf("hitung kembali?(y/n) : ");
        scanf(" %c", &end);
    } while (end == 'y' || end == 'Y');

        return 0;
    }
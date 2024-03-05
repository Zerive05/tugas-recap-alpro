#include <stdio.h>

int main()
{
    int s, t, v;
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
        
        printf("Masukkan jarak (m) dan waktu (s) dipisahkan oleh spasi: ");
        scanf("%d %d", &s, &t);

        float hasil1 = (float)s / t;

        printf("Kecepatan: %.2f m/s\n", hasil1);

        printf("Masukkan kecepatan (m/s) dan waktu (s) dipisahkan oleh spasi: ");
        scanf("%d %d", &v, &t);

        float hasil2 = (float)v * t;

        printf("Jarak: %.2f m\n", hasil2);

        printf("Masukkan jarak (m) dan kecepatan (m/s) dipisahkan oleh spasi: ");
        scanf("%d %d", &s, &v);

        float hasil3 = (float)s / v;

        printf("Waktu: %.2f s\n", hasil3);

        printf("hitung kembali?(y/n) : ");
        scanf(" %c", &end);
    } while (end == 'y' || end == 'Y');

    return 0;
}

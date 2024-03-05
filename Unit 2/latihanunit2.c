#include <stdio.h>

int main()
{
    int jmltrans, nominal, totalp = 0;
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
        
        printf("Masukkan jumlah transaksi hari ini: ");
        scanf("%d", &jmltrans);

        if (jmltrans > 0)
        {
            printf("Masukkan nominal transaksi:\n");
            for (int i = 0; i < jmltrans; ++i)
            {
                printf("Transaksi ke-%d: ", i + 1);
                scanf("%d", &nominal);
                totalp += nominal;
            }
        }

        if (jmltrans <= 0)
        {
            printf("Tidak ada transaksi hari ini");
        }
        else
        {
            printf("Total pengeluaran hari ini = %d", totalp);
        }

        printf("hitung kembali?(y/n) : ");
        scanf(" %c", &end);
    } while (end == 'y' || end == 'Y');

        return 0;
    }

#include <stdio.h>
#include <conio.h>

float s, volume, luas;
float a, tp;
float p, l, t;
int pilih;

main()
{
kembali:

    printf("=============================================================== \n");
    printf("Program Menghitung Volume dan Luas Bangun Ruang Dimensi 3 \n");
    printf("=============================================================== \n \n");

    printf("1.Kubus \n");
    printf("2.Balok \n");
    printf("3.Prisma Segitiga \n");
    printf("4.Keluar \n \n");

    printf("Pilih Menu = ");
    scanf("%d", &pilih);

    printf("\n");

    switch (pilih)
    {
    case 1:

        printf("Masukan Sisi kubus = ");
        scanf("%f", &s);
        printf("\n");

        volume = s * s * s;
        luas = 6 * s * s;

        printf("-------------------------------------------- \n");
        printf("Volume Kubus = %.2f cm3\n", volume);
        printf("Luas Kubus = %.2f cm3 \n", luas);
        printf("-------------------------------------------- \n");
        printf("--------------------------------------------");
        printf("\n");

        break;

    case 2:

        printf("Masukan Panjang Balok = ");
        scanf("%f", &p);
        printf("Masukan Luas Balok = ");
        scanf("%f", &l);
        printf("Masukan Tinggi Balok = ");
        scanf("%f", &t);

        printf("\n");

        volume = p * l * t;
        luas = 2 * (p * l + p * t + l * t);

        printf("-------------------------------------------- \n");
        printf("Volume Balok = %.2f cm3\n", volume);
        printf("Luas Balok = %.2f cm3 \n", luas);
        printf("-------------------------------------------- \n");
        printf("--------------------------------------------");
        printf("\n");

        break;

    case 3:

        printf("Masukan Alas = ");
        scanf("%f", &a);
        printf("Masukan Tinggi = ");
        scanf("%f", &t);
        printf("Masukan Tinggi Prisma = ");
        scanf("%f", &tp);

        printf("\n");

        volume = (a * t / 2) * tp;
        luas = (2 * (a * t)) + (3 * (tp * a));

        printf("-------------------------------------------- \n");
        printf("Volume Prisma = %.2f cm3\n", volume);
        printf("Luas Prisma = %.2f cm3 \n", luas);
        printf("-------------------------------------------- \n");
        printf("--------------------------------------------");
        printf("\n");

        break;

    case 4:
        goto kembali;

    default:
        break;
    }

    return 0;
}

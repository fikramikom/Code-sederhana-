#include <stdio.h>

float quiz, uts, uas, tugas, total;
int nim;
char nama[50];
main()
{
    printf("------------------------------------------- \n");
    printf("== Program Menghitung Nilai Rata-Rata == \n");
    printf("------------------------------------------- \n \n");

    printf("Masukan Nim : ");
    scanf("%d", &nim);
    printf("\n");

    printf("Masukan Nama : ");
    scanf("%s", &nama);
    printf("\n");

    printf("Masukan Nilai Quiz : ");
    scanf("%f", &quiz);
    printf("\n");

    printf("Masukan Nilai UTS : ");
    scanf("%f", &uts);
    printf("\n");

    printf("Masukan Nilai UAS : ");
    scanf("%f", &uas);
    printf("\n");

    printf("Masukan Nilai Tugas : ");
    scanf("%f", &tugas);

    printf("\n \n");

    printf("------------------------------------------- \n");

    total = 0.1 * quiz + 0.2 * tugas + 0.35 * uts + 0.35 * uas;

    if (total >= 85 && total <= 100)
    {
        printf("Nim : %d \n \n", nim);
        printf("Nama : %s \n \n", nama);
        printf("Total Nilai : %.2f \n \n", total);
        printf("Grade Nilai : A  ");
        printf("\n ------------------------------------------- \n");
        printf("------------------------------------------- \n");
    }

    else
    {
        if (total >= 70 && total <= 84)
        {
            printf("Nim : %d \n \n", nim);
            printf("Nama : %s \n \n", nama);
            printf("Total Nilai : %.2f \n \n", total);
            printf("Grade Nilai : B  ");
            printf("\n ------------------------------------------- \n");
            printf("------------------------------------------- \n");
        }
    }

    if (total >= 55 && total <= 69)
    {
        printf("Nim : %d \n \n", nim);
        printf("Nama : %s \n \n", nama);
        printf("Total Nilai : %.2f \n \n", total);
        printf("Grade Nilai : C  ");
        printf("\n ------------------------------------------- \n");
        printf("------------------------------------------- \n");
    }

    else
    {
        if (total >= 40 && total <= 54)
        {
            printf("Nim : %d \n \n", nim);
            printf("Nama : %s \n \n", nama);
            printf("Total Nilai : %.2f \n \n", total);
            printf("Grade Nilai : D  ");
            printf("\n ------------------------------------------- \n");
            printf("------------------------------------------- \n");
        }
    }

    if (total >= 0 && total <= 39)
    {
        printf("Nim : %d \n \n", nim);
        printf("Nama : %s \n \n", nama);
        printf("Total Nilai : %.2f \n \n", total);
        printf("Grade Nilai : E  ");
        printf("\n ------------------------------------------- \n");
        printf("------------------------------------------- \n");
    }

    return 0;
}

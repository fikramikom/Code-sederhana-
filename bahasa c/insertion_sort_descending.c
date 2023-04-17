#include <stdio.h>

int i, j, nilaidata, cek;

main()
{
    // input nilai n

    printf("Masukan Jumlah Nilai = \t");
    scanf("%d", &nilaidata);

    // memperdikit variabel
    int data[nilaidata];

    // perulangan data nilai mata kuliah

    for (i = 0; i < nilaidata; i++)
    {
        printf("Masuk Nilai Mahasiswa = ");
        scanf("%d", &data[i]);
    }

    // proses penyusunan data dari terbesar sampai terkecil

    for (int i = 1; i < nilaidata; i++)
    {
        for (int j = 0; j < nilaidata - i; j++)
        {
            if (data[j] < data[j + 1])
            {
                cek = data[j];
                data[j] = data[j + 1];
                data[j + 1] = cek;
            }
        }
    }

    // memunculkan nilai data ter urut

    printf("Data Nilai Tersusun =  ");
    for (i = 0; i < nilaidata; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}

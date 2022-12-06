//Menghitung Usia berdasarkan Tahun Lahir dan Tahun Sekarang

#include <stdio.h>
int main ()
{
    printf ("\t\tMenentukan Usia\n\n");

    int tl, ts, usia;
    printf("Masukkan Tahun Lahir :");
    scanf("%d", &tl);
    printf("Masukkan Tahun Sekarang :");
    scanf("%d", &ts);

    usia = (ts - tl);

    printf("Usia Anda %d tahun", usia);

return 0;
}




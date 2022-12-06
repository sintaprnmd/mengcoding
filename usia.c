//Menghitung Usia berdasarkan Tahun Lahir dan Tahun Sekarang

#include <stdio.h>
int main ()
{
    printf ("\t\tMenentukan Usia dengan Tahun Lahir dan Tahun Sekarang\n\n");

    int tl, ts, usia;
    printf("\t\t\t\tMasukkan Tahun Lahir :");
    scanf("%d", &tl);
    printf("\n\t\t\t\tMasukkan Tahun Sekarang :");
    scanf("%d", &ts);

    usia = (ts - tl);

    printf("\t\t\t\tUsia Anda %d tahun", usia);
return 0;
}

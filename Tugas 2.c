#include <stdio.h>
int main (){char hasilujian;
    printf("Masukkan Nilai Ujian :");
    scanf("%c",&hasilujian);
    switch (hasilujian){
    case 'A':
        printf("sangat baik!\n ");
        break;
    case 'B' :
    case 'C':
        printf ("Baik\n ");
        break;
    case 'D':
        printf ("cukup\n ");
         break;
         case 'F':
        printf ("sebaiknya coba lagi\n ");
        break;
         default:
        printf ("Gagal\n");}
    printf("Nilai Anda adalah : %c",hasilujian);}


#include <stdio.h>
int main (){
    char hasilujian='A';
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
    printf("Nilai anda adalah %c\n",hasilujian);
    return 0;}


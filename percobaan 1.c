#include <stdio.h>
int main ()
{
 // definisi variable lokal
    int x;
    //cek kondisi boolean menggunakan pernyataan if
    printf ("masukkan nilai x :\n");
    scanf ("%d",&x);
    if ( x < 30 );
{
    // jika kondisi true,tampilkan begian berikut
    printf ( "%d lebih kecil dari pada 30\n",x);
}
printf ("nilai x sebenarnya adalah : %d\n",x);
return 0 ;
}


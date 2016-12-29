#include<stdio.h>
 main ()
{
    int abs,uas;
    printf("Masukkan Persentasi abs :\n");
    scanf("%d",&abs);
    printf("Masukkan Persentasi uas :\n");
    scanf("%d",&uas);
    if (abs > 70 & uas > 50)
    {
        printf("Anda Lulus\n");
    }
    if(abs < 70 & uas < 50)
    {
        printf("Anda Gagal\n");
    }
    printf("kehadiran : %d\n",abs);
    printf("nilai uas : %d\n",uas);
    return 0;
}

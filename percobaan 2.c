#include<stdio.h>
int main()
{
    int x;
    printf("masukkan nilai x : \n");
    scanf("%d",&x);
    if(x<20)
    {
        printf("x lebih kecil dari pada 20 \n");
    }
    else
    {
        printf("x nilai tidak lebih kecil dari 20 \n");
    }
    printf("nilai x adalah : %d\n",x);
    return 0;
}

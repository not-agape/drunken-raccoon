#include <stdio.h>

// dado um número, retorna o fatorial
int fatorial (int num)
{

    int vfat;

    if (num <= 1){
        return 1;
    } else {
        vfat = fatorial(num -1) *num;
        return vfat; 
    }
}

// exemplo de recursividade para consulta futura
int main ()
{   
    int n;
    scanf(" %d", &n);   

    printf("%d!: %li\n\n", n, fatorial(n));

    return 1;
}
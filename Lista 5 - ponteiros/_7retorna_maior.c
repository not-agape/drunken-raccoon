#include <stdio.h>

// dados 3 números inteiros, retorna por referência qual dos três é o maior
void retornaMaior(int a, int b, int c, int *result)
{
    if (a >= b && a >= c)
        *result = a;
    else if (b >= a && b >= c)
        *result = b;
    else if (c >= a && c >= b)
        *result = c;
}

// questão 7: retorna maior
int main ()
{

    int a; 
    int b;
    int c;
    
    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);
    
    int result;

    retornaMaior(a, b, c, &result);

    printf("Maior (%d, %d, %d)--> %d\n", a, b, c, result);

    return 1;
}
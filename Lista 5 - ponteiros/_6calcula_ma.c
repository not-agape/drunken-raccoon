#include <stdio.h>

// calcula a média de dois dados números e retorna o valor por referência
void calculaMedia(float a, float b, float *result)
{
    *result = (a +b) /2;
}

// questão 6: calcula média aritmética 
int main ()
{
    float a;
    float b;

    scanf(" %f", &a);
    scanf(" %f", &b);
    
    float result;

    calculaMedia(a, b, &result);

    printf("Media Aritmetica: %.2f\n", result);

    return 1;
}
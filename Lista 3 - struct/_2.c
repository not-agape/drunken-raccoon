#include <stdio.h>

typedef struct {
    int x;
    int y;
} coord;

int main (){
    // definição da variável
    coord novaCoord;
    
    // entrada de dados
    scanf("%d", &novaCoord.x);
    scanf(" %d", &novaCoord.y);
    
    // processamento e saída
    if (novaCoord.x == 0)
        printf("Eixo Y\n");
    else if (novaCoord.y == 0)
        printf("Eixo X\n");
    else if (novaCoord.x > 0 && novaCoord.y > 0)
        printf("Primeiro Quadrante\n");
    else if (novaCoord.x < 0 && novaCoord.y > 0)
        printf("Segundo Quadrante\n");
    else if (novaCoord.x < 0 && novaCoord.y < 0)
        printf("Terceiro Quadrante\n");
    else if (novaCoord.x > 0 && novaCoord.y < 0)
        printf("Quarto Quadrante\n");
    else
        printf("Erro!\n");
    
    return 0;
}

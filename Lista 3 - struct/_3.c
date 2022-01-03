#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} coord;

int main (){
    // definição da variável
    coord ponto[2];
    int distX, distY;
    float distAB;
    
    // entrada de dados
    for (int pos = 0; pos < 2; pos++){
        scanf(" %d", &ponto[pos].x);
        scanf(" %d", &ponto[pos].y);
    }
    
    // processamento e saída
    distX = ponto[1].x -ponto[0].x; 
    distY = ponto[1].y -ponto[0].y; 
    distAB = sqrt( pow( distX, 2) +pow( distY, 2));
    
    printf("A distancia entre os pontos (%i, %i) e (%i, %i) eh de %.2f\n", ponto[0].x, ponto[0].y, ponto[1].x, ponto[1].y, distAB);
    
    return 0;
}

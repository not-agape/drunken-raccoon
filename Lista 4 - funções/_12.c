#include <stdio.h>

typedef struct {
    int x;
    int y;
} particula;

int houveColisao(particula *p1, particula *p2, int t, int *tCol){
    
    _Bool flag = 0;
    
    for (int passo = 0; passo < t; passo++){
        if (p1[passo].x == p2[passo].x && p1[passo].y == p2[passo].y && !flag){
            *tCol = passo;
            flag = 1;
        } 
    }
    
    if (flag)
        return 1;

    return 0;
    
}

void main(){

    particula p1[] = {{1,2},{3,4},{5,6}};
    particula p2[] = {{0,0},{3,4},{0,0}};
    int tCol;
    if(houveColisao(p1,p2,3,&tCol))
        printf("Colidiu em t = %d.\n",tCol);
    else
        printf("Sem colisao.\n");

}
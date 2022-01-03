#include <stdio.h>

int main() {
    #define n 10       // tamanho do vetor
    int a;             // input do usuário

    scanf("%d", &a);

    // soma a entrada com o índice do laço
    for(int i = 0; i < n; i++){
        printf("x[%d] = %d\n", i, a+i);
    }

    return(0);
}

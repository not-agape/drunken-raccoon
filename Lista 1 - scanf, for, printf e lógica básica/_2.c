#include <stdio.h>

int main() {

    // definição das variáveis
    #define n 7
    int a[n];
    int b[n];

    // entrada de dados
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &a[pos]);

        if (a[pos] < 50){
            b[pos] = -1;
        } else if(a[pos] == 50) {
            b[pos] = 0;
        } else {
            b[pos] = 1;
        }
    }

    // saída
    for (int pos = 0; pos < n; pos++){
        printf("A[%d] = %d  B[%d] = %i\n", pos, a[pos], pos, b[pos]);
    }

    return (0);
}

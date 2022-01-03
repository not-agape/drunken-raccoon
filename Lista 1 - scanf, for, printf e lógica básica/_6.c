#include <stdio.h>

int main() {
    // declaração das variáveis
    #define n 20
    float cD2R;
    
    // entrada da cotação
    scanf("%f", &cD2R);
    
    // processamento e saída da conversão
    for (int pos = 1; pos <= n; pos++){
        printf("%.2f (U$) = %.2f (R$)\n", (float) pos, pos*cD2R);
    }
    
    return (0);
}

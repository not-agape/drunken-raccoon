#include <stdio.h>

typedef struct {
    char strA[51];
    char strB[51];
    char strFinal[101];
} dados;

int main() {
    // declaração das variáveis globais
    int nTestes;
    scanf("%i", &nTestes);
    dados input[nTestes];
    _Bool flagA, flagB;
    
    // entrada de dados
    for (int pos = 0; pos < nTestes; pos++) {
        scanf(" %s %s", input[pos].strA, input[pos].strB);
    }
    
    for (int posTeste = 0; posTeste < nTestes; posTeste++) {
        
        // declaração de variáveis locais - posição na cadeia de chars
        int posA = 0, posB = 0, posFinal;
        flagA = 0;
        flagB = 0;
        
        for (posFinal = 0; input[posTeste].strA[posA] != '\0' || input[posTeste].strB[posB] != '\0'; posFinal++) {
            // teste de final
            if (input[posTeste].strA[posA] == '\0') flagA = 1;
            if (input[posTeste].strB[posB] == '\0') flagB = 1;
                
            // arranjo
            if (!flagA && !flagB) {
                if (posFinal % 2 == 0) {
                    input[posTeste].strFinal[posFinal] = input[posTeste].strA[posA];
                    posA++;
                } else {
                    input[posTeste].strFinal[posFinal] = input[posTeste].strB[posB];
                    posB++;
                }      
            } else if (!flagA) {
                input[posTeste].strFinal[posFinal] = input[posTeste].strA[posA];
                posA++;
            } else if (!flagB) {
                input[posTeste].strFinal[posFinal] = input[posTeste].strB[posB];
                posB++;
            }
        }
        
        input[posTeste].strFinal[posFinal+1] = '\0';
        printf("%s\n", input[posTeste].strFinal);
    
    }
    
    return 1;
}

#include <stdio.h>

// verifica se o número tem apenas dois divisores positivos; um e ele mesmo
_Bool ehPrimo(int num){

    // tratando caso especial - apenas um divisor com multiplicidade dois
    if (num == 1)
        return 0;

    for (int indice = 2; indice <= num /2; indice++)
        // caso falha - para o código
        if (num % indice == 0)
            return 0;        

    // é primo
    return 1;

}

// procura primos em um vetor de números inteiros e retorna a primeira posição verdadeira 
int encontraPrimo(int v[], int n){
    
    int posicao = -1;

    for (int indice = 0; indice < n; indice++)
        if (ehPrimo(v[indice])) 
            return indice;

    return posicao;

}


int main() {
    
    int v[5] = {4, 8, 7, 1, 2};
    int pos = encontraPrimo(v, 5);
    
    if(pos == -1)
        printf("Sem primo\n");
    else
        printf("Primo no indice: %d{%d eh primo}\n", pos, v[pos]);

}
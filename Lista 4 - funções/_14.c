#include <stdio.h>
#include <string.h>

int trocaEspaco(char *A, char *B) {
    
    int indiceA = 0;
    int indiceB = 0;
    int tamanhoA = strlen(A);
    _Bool temEspaco;
    int contadorEspaco = 0;
    
    // trata os espaços anteriores
    while (A[indiceA] == ' '){
        contadorEspaco++;
        indiceA++;
    }

    do {

        // se diferente de espaço, salva em B
        if (A[indiceA] != ' ') {
            
            // caso não seja o começo da frase, espaço em B
            if (temEspaco){

                B[indiceB] = ' ';
                indiceB++;

                contadorEspaco--;
                temEspaco = 0;
            
            }
                
            B[indiceB] = A[indiceA];
            indiceA++;
            indiceB++;

        } else {
            
            // remove todos os espaços
            while (A[indiceA] == ' '){
                contadorEspaco++;
                indiceA++;
            }

            temEspaco = 1;
        }

    } while (indiceA < tamanhoA);

    B[indiceB] = '\0';

    return contadorEspaco;

}

void main() {

    char str1[80] = {" nao   pode ser  "};
    char str2[80];
    
    int n = trocaEspaco(str1, str2);
    printf("%d\n%s\n%s\n", n, str1, str2);

}

/**
 * a) Todos os espaços em branco antes do primeiro caractere devem ser removidos;
 * b) Todos os espaços em branco que separam palavras consecutivas devem ser substituídos por um único espaço em branco;
 * c) Todos os espaços em branco do final da string devem ser removidos;
 */
#include <stdio.h>

int main() {
    // declaração das variáveis
    char s[100];
    char vog[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int contadorV = 0;

    // entrada de dados - %[^\n] > leia tudo até \n & %*c > descarte o \n 
    scanf("%[^\n]s", s);
    
    // percorre a 'string' formada contando suas posições até o NULL
    for (int pos = 0; s[pos] != '\0'; pos++){
        // percorre a cadeia de vogais comparando com a frase
        for (int posV = 0; posV < 10; posV++) {
            if (s[pos] == vog[posV]){
                contadorV++;
            }
        }
    }
    
    // saída
    printf("Na String existem %d vogais.", contadorV);

    return 0;
}

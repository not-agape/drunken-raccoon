#include <stdio.h>
#include <string.h>

int main() {
    // declaração das variáveis
    char s[100];
    int n;

    // entrada de dados - %[^\n] > leia tudo até \n & %*c > descarte o \n 
    scanf("%[^\n]s", s);
    n = strlen(s);
    
    // percorre a 'string' formada contando suas posições até o NULL
    for (int pos = 0; pos < n - 1; pos++){
        if (s[pos] != '0' && s[pos] != '1'){
            // saída - falha
            printf("Nao eh uma sequencia binaria., tamanho: %d", n);
            return 0;
        }
    }
    
    // saída
    printf("Eh um sequencia binaria.");
    return 1;
}

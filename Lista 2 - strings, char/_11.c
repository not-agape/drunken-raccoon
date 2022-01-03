#include <stdio.h>

int main() {
    // declaração das variáveis
    char s[100];
    char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    _Bool achou;
    
    // entrada de dados - %[^\n] > leia tudo até \n & %*c > descarte o \n 
    scanf("%[^\n]s", s);
    
    // percorre a 'string' formada contando suas posições até o NULL
    for (int pos = 0; s[pos] != '\0'; pos++){
        achou = 0;
        // percorre a cadeia hex comparando com a frase
        for (int posHex = 0; posHex < 16; posHex++) {
            if (s[pos] == hex[posHex]){
                achou = 1;
            }
        }
        
        // saída - falha
        if(!achou){
            printf("%s nao eh uma sequencia hexadecimal!", s);
            return 0;
        }
    }
    
    // saída
    printf("%s eh uma sequencia hexadecimal!", s);
    return 1;
}

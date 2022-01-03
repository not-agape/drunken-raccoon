#include <stdio.h>

int main() {
    // declaração das variáveis
    char s[100];
    _Bool achou;
    
    // entrada de dados - %[^\n] > leia tudo até \n & %*c > descarte o \n 
    scanf("%[^\n]s", s);
    
    // percorre a 'string' formada contando suas posições até o NULL
    for (int pos = 0; s[pos] != '\0'; pos++){
        achou = 0;
        // percorre a cadeia de números comparando com a frase
        for (char c = '0'; c <= '7'; c++) {
            if (s[pos] == c){
                achou = 1;
            }
        }
        
        // saída - falha
        if(!achou){
            printf("%s nao eh uma sequencia octal!", s);
            return 0;
        }
    }
    
    // saída
    printf("%s eh uma sequencia octal!", s);
    return 1;
}

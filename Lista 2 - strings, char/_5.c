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
        
        // percorre a cadeia de maiúsculas comparando com a frase
        for (char maius = 'A'; maius <= 'Z'; maius++) {
            if (s[pos] == maius){
                achou = 1;
            }
        }
        
        // se não tiver encontrado uma maiuscula correspondente, termina a exec 
        if (!achou){
            printf("Nem todos os caracteres da cadeia sao maiusculas.");
            return 0;
        }
    }
    
    // saída
    printf("Todos os caracteres da cadeia sao maiusculas.");
    return 0;
}

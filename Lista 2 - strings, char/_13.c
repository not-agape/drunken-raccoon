#include <stdio.h>

int main() {
    // declaração das variáveis
    char str[100];
    int palavras = 0;
    
    // entrada de dados - %[^\n] > leia tudo até \n & ' '%c > descarte o \n 
    scanf("%[^\n]s", str);
    
    // percorre a 'string' formada contando suas posições até o NULL
    for (int pos = 0; str[pos] != '\0'; pos++){
        if (str[pos] == ' '){
            palavras++;
        }
    }
    
    // saída
    printf("A string possui %d palavra(s)", palavras +1);
    return 0;
}

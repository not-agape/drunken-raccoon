#include <stdio.h>

int main() {
    // declaração das variáveis
    char s[100];
    int contador = 0;
    
    // entrada de dados - %[^\n] > leia tudo até \n 
    scanf("%[^\n]s", s);
    
    // percorre a 'string' formada contando suas posições até o NULL
    for(int pos = 0; s[pos] != '\0'; pos++){
        contador++;
    }
    
    printf("Tamanho da String = %d.", contador);
    
    return 0;
}

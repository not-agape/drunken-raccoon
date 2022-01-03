#include <stdio.h>

int main() {
    // declaração das variáveis
    char nome[100];
    char sobrenome[20];
    int contSNome = 0;
    
    // entrada de dados - %[^\n] > leia tudo até \n & ' '%c > descarte o \n 
    scanf("%[^\n]s", nome);
    
    // percorre a 'string' formada contando suas posições até o NULL
    for (int pos = 0; nome[pos] != '\0'; pos++){
        sobrenome[contSNome] = nome[pos];
        contSNome++;
        
        // se detectar um espaço, limpa o sobrenome
        if (nome[pos] == ' '){
            contSNome = 0;
        }
    }
    
    sobrenome[contSNome] = '\0';
    
    // saída
    printf("Seja bem-vindo(a) Sr(a). %s\n", sobrenome);
    return 0;
}

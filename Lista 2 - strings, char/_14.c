#include <stdio.h>

int main() {
    // declaração das variáveis
    char frase[128];
    char palavra[128];
    int contPalavra = 0;
    int contLetra = 0;
    
    // entrada de dados - %[^\n] > leia tudo até \n & ' '%c > descarte o \n 
    scanf("%[^\n]s", frase);
    
    // tratamento de variável
    if (frase[0] == ' ' || frase[0] == '\0'){
    	return 0;
    }
    
    // percorre a 'string' formada contando suas posições até o NULL
    for (int pos = 0; frase[pos] != '\0'; pos++){
        
        palavra[contLetra] = frase[pos];
        contLetra++;
        
        if (frase[pos] == ' '){
            contPalavra++;
            contLetra--;    
            palavra[contLetra] = '\0';
            printf("%da. palavra: %s tem %d caractere(s)\n", contPalavra, palavra, contLetra);
            contLetra = 0;
        }
        
    }

    // saída
    contPalavra++;
    contLetra--;
    palavra[contLetra] = '\0';
    printf("%da. palavra: %s tem %d caractere(s)\n", contPalavra, palavra, contLetra);
    return 1;
}

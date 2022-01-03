#include <stdio.h>
#include <string.h>

int main() {
    // declaração das variáveis
    char str[100];
    char rts[100];
    int tamanho;
    
    // entrada de dados - %[^\n] > leia tudo até \n & %*c > descarte o \n 
    scanf("%[^\n]s", str);
    tamanho = strlen(str);
    
    for (int pos = 0; str[pos] != '\0'; pos++){
        rts[(tamanho -1) -pos] = str[pos];
    }
    
    printf("%s", rts);
    return 1;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // declaração das variáveis
    char str[100];
    int tamanho;
    
    // entrada de dados - %[^\n] > leia tudo até \n & %*c > descarte o \n 
    scanf("%[^\n]s", str);
    tamanho = strlen(str);
    
    for (int pos = 0; pos < tamanho -1; pos++){
        if (str[pos] != str[(tamanho -1) -pos]){
            printf("%s \"nao\" eh um palindromo.", str);
            return 0;
        }
    }
    
    printf("%s eh um palindromo.", str);
    return 1;
}

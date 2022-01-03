#include <stdio.h>

int main() {
    // declaração das variáveis
    char str1[100];
    char str2[100];

    // entrada de dados - %[^\n] > leia tudo até \n & ' '%c > descarte o \n 
    scanf("%[^\n]s", str1);
    scanf(" %[^\n]s", str2);
    
    // percorre a 'string' formada contando suas posições até o NULL
    for (int pos = 0; str1[pos] != '\0'; pos++){
        if (str1[pos] != str2[pos]){
            printf("As strings sao diferentes!\n");
            return 0;
        }
    }
    
    // saída
    printf("As strings sao iguais!\n");
    return 1;
}

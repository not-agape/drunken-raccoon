#include <stdio.h>
#include <ctype.h>

int main() {
    // declaração das variáveis
    char str[100];
    char letra;
    
    // entrada de dados - %[^\n] > leia tudo até \n & %*c > descarte o \n 
    scanf("%[^\n]s", str);
    scanf(" %c", &letra); // o espaço antes do '%c' serve para lidar com o \n do scanf passado
    
    for (int pos = 0; str[pos] != '\0'; pos++){
        if (toupper(str[pos]) == toupper(letra)){
            str[pos] = '*';
        }
    }
    
    printf("%s\n", str);
}

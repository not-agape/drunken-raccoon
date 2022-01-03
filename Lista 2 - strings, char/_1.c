#include <stdio.h>

int main(){
    char entrada;
    
    // entrada de dados
    scanf("%c", &entrada);

    // processamento e saída
    if (entrada == 'A' || entrada == 'a'){
        printf("* {%c} %c", entrada, entrada+1);
    } else if (entrada == 'Z' || entrada == 'z') {
        printf("%c {%c} *", entrada-1, entrada);
    } else {
        printf("%c {%c} %c", entrada-1, entrada, entrada+1);
    }
    
    return 0;
}

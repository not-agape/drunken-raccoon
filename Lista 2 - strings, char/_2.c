#include <stdio.h>

int main() {
    int op;
    
    // entrada de dados
    do {
        scanf("%i", &op);
    } while (op > 3 || op < 1);
    
    switch(op){
        case 1:
            for (char c = '0'; c <= '9'; c++){
                printf("%c", c);
            }
            break;
        case 2:
            for (char c = 'A'; c <= 'Z'; c++){
                printf("%c", c);
            }
            break;
        case 3:
            for (char c = 'a'; c <= 'z'; c++){
                printf("%c", c);
            }
            break;
        default:
            break;
    }
    
    return 0;
}

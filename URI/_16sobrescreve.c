#include <stdio.h>

#define tamanho 1001

_Bool checaVeracidade(char* antes, char* depois, int numPassagens)
{
    char posDelete[tamanho];

    // testa por mudança na cadeia original
    if (numPassagens % 2 != 0)
        for (int posicao = 0; *(antes +posicao) != '\0'; posicao++)
            if (*(antes + posicao) == 0)
                posDelete[posicao] = 1;
            else
                posDelete[posicao] = 0;
    else
        for (int posicao = 0; *(antes +posicao) != '\0'; posicao++)
            posDelete[posicao] = *(antes +posicao);
        
    for (int posicao = 0; posDelete[posicao] != '\0'; posicao++)
        if (posDelete[posicao] != *(depois +posicao))
            return 0;
    
    return 1;
}

// questão 16: segurança máxima
int main()
{
    int numPassagens;
    char bitsAntes[tamanho];
    char bitsDepois[tamanho];

    do
        scanf(" %d", &numPassagens);
    while(numPassagens < 1 || numPassagens > 20);

    scanf(" %s", bitsAntes);
    scanf(" %s", bitsDepois);

    if (checaVeracidade(bitsAntes, bitsDepois, numPassagens))
        printf("Deletion succeeded\n");        
    else
        printf("Deletion failed\n");        
    
    return 1;
}
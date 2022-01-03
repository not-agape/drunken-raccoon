#include <stdio.h>

// dadas duas strings, retorna se a segunda está contida em algum ponto da primeira
_Bool temString(char *texto, char *busca)
{

    for (int posicao = 0; *(texto +posicao) != '\0'; posicao++)                                 // enquanto: não chegar no final de texto
        if (*(texto +posicao) == *busca)                                                        //  se: o ponteiro tiver o valor do primeiro char de busca
        {
            _Bool flagEncontrou = 1;

            for (int i = 0; *(busca +i) != '\0' && *(texto +posicao +i) != '\0'; i++)           //  então: percorra ambos checando 
                if (*(texto +posicao +i) != *(busca +i))                                        //  se texto é diferente de busca
                {                                                       
                    flagEncontrou = 0;                                                          //  caso seja, saia do loop e flag como falso 
                    break;
                }
            
            if (flagEncontrou)                                                                      
                return 1;
        }
    
    return 0;

}

// questão 9: encontrar um trecho de texto
int main ()
{

    char s1[128];
    char s2[64];

    scanf(" %[^\n]s", s1);
    scanf(" %[^\n]s", s2);

    if(temString(s1, s2))
        printf("Ocorre!\n");
    else
        printf("Nao ocorre!\n");

    return 1;
    
}
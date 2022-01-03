#include <stdio.h>

void trocar(char *s, char c)
{
    for (int posicao = 0; *(s +posicao) != '\0'; posicao++) // enquanto: s em posicao seja diferente de NULL
        if (*(s +posicao) == c)                             //  faça se: s em posicao seja igual a c
            *(s +posicao) = '*';                            //      troque s na posicao por * 
}

// questão 5: trocar um dado caractere em uma dada string.
int main ()
{

    char c;
    char s[128];
    
    scanf(" %[^\n]s", s);
    scanf(" %c", &c);

    trocar(s, c);

    printf("%s\n", s);

    return 1;
}
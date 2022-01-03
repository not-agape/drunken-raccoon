#include <stdio.h>

// dado n, retorna o dobro
void dobro(int **b)
{
    **b *= 2;
}

// dado n, retorna o triplo
void triplo(int ***c)
{
    ***c = (***c /2) *3;
}

// dado n, retorna o quadruplo
void quadruplo(int ****d)
{
    ****d = (****d /3) *4;
}

// questão 8: ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de ponteiro de
int main ()
{

    int a;
    int *b;
    int **c;
    int ***d;

    scanf(" %d", &a);
    
    b = &a;
    c = &b;
    d = &c;
    
    dobro(&b);
    printf("%d\n", *b);

    triplo(&c);
    printf("%d\n", **c);

    quadruplo(&d);
    printf("%d\n", ***d);

    return 1;
}
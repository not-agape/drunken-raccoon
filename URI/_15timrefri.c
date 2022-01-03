#include <stdio.h>

// dada uma qtd inicial e garrafas encontradas, retorna o número de garrafas bebidas no dia
int contaRefri(int inicio, int achadas, int preco)
{
    int contador = 0;
    int numGarrafas = inicio + achadas;
    
    while (numGarrafas >= preco)
    {
        contador++;
        numGarrafas -= preco;       // troca X garrafas vazias por uma nova
        numGarrafas++;              // soma a garrafa nova vazia ao montante
    }

    return contador;
}

// questão 15: tim e os refrigerantes
int main()
{
    int emPosse;
    int achadas;
    int qtdNecessaria;

    scanf(" %d %d %d", &emPosse, &achadas, &qtdNecessaria);

    printf("%d\n", contaRefri(emPosse, achadas, qtdNecessaria));

    return 1;
}
#include <stdio.h>

int main (){
    // definição de variáveis
    struct venda {
        int quantidade;
        float valorUni;
    };
    int quantVendas;
    float valorTotal = 0;
    
    // entrada de dados - número de vendas realizadas
    scanf("%d", &quantVendas);
    struct venda novaVenda[quantVendas];
    
    // entrada de dados - vendas realizadas
    for(int pos = 0; pos < quantVendas; pos++){
        scanf(" %i", &novaVenda[pos].quantidade);
        scanf(" %f", &novaVenda[pos].valorUni);
    }
    
    // saída - itens
    for(int pos = 0; pos < quantVendas; pos++){
        float valorItem = novaVenda[pos].quantidade *novaVenda[pos].valorUni;
        printf("%i x R$ %.2f = R$ %.2f\n", novaVenda[pos].quantidade, novaVenda[pos].valorUni, valorItem);
        valorTotal += valorItem;
    }
    
    // saída - total
    printf("\nTotal das Vendas = R$ %.2f\n", valorTotal);
    
    return 0;
}

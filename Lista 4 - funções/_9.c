//inclua APENAS a definição da struct e a implementação da função! 
// As bibliotecas e a parte principal do programa (main) NÃO DEVEM SER INCLUÍDOS AQUI.

typedef struct {
    char nome[30];
    int idade;
} pessoa;

float calculaMediaIdade(pessoa* p, int n){
    float soma = 0;
    
    for (int pos = 0; pos < n; pos++) {
        soma += p[pos].idade;
    }
    
    return (soma /n);
}
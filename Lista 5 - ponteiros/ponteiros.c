int main()
{
    
    int variavel = 0;
    int *endereco = &variavel;

    printf("Valor da Variável: %d\n", variavel);
    printf("Valor do Endereço: %x\n", endereco);
    printf("Valor da Variável pelo Endereço: %d\n", *endereco);
    
    return 1;

}
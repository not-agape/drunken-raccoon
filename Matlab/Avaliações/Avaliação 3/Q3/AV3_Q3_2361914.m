% AV3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914 - Data: 25/08/2021

## Quest�o 3: Implementa��o Calcula Multa

clear
clc

## entrada/sa�da -> valor inicial e atraso em dias
## -----------------------------------------------

divida = input("Valor do Boleto em R$: ");
dias = input("Dias de Atraso no Pagamento: ");
clc

% chamada das fun��es
montanteSimples = calculaMultaSimples(divida, dias);
montanteComposto = calculaMultaComposta(divida, dias);

printf("Para o valor de [R$:%.2f], com atraso de %i dias, temos:\n", divida, dias);
printf("Juros simples [R$:%.2f]\nJuros composto [R$:%.2f]\n\n", montanteSimples, montanteComposto);
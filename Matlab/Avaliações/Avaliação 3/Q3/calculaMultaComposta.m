% AV3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914 - Data: 25/08/2021

## Questão 3: Função Calcula Multa Composto

function valorCor = calculaMultaComposta(valor, dias)
  
  % para mudar facilmente a taxa
  taxa = 0.1;
  multa = 2;
  valorCor = valor*(1+taxa/100)^dias;
  valorCor += valorCor*multa/100;
  
endfunction
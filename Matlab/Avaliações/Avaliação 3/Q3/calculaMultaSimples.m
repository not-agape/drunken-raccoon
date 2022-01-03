% AV3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914 - Data: 25/08/2021

## Questão 3: Função Calcula Multa Simples

function valorCor = calculaMultaSimples(valor, dias)
  
  % para mudar facilmente a taxa e a multa
  multa = 2;
  taxa = 0.1;
  valorCor = valor + valor* taxa/100* dias;
  valorCor += valorCor*multa/100; 
  
endfunction
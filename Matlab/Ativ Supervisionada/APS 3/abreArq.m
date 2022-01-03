% APS3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914   | Data: 25/08/2021

## Função Lê Arquivo

function [nome, n1, n2] = abreArq(nomes_ID, n1_ID, n2_ID)

% criação das var locais
nome = [];
n1 = [];
n2 = [];

% passa o conteúdo dos arquivos para as cells e os fecha
while(~feof(nomes_ID))
  
  nome{end+1} = fgets(nomes_ID);
  n1{end+1} = fgets(n1_ID);
  n2{end+1} = fgets(n2_ID);

endwhile
fclose('all');

endfunction
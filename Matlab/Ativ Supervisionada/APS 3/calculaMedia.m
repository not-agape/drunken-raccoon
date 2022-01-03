% APS3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914   | Data: 25/08/2021

## Função Calcula Média

function mediaAluno = calculaMedia(n1, n2)
  % separa RA e Nota
  nota1 = strsplit(n1, ";");
  nota2 = strsplit(n2, ";");
  
  
  mediaAluno = ( str2double(nota1{2})+ str2double(nota2{2})) / 2;
endfunction
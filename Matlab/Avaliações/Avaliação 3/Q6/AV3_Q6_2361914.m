% AV3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914 - Data: 25/08/2021

## Questão 6: Nro Raiz Quadrada

clear
clc

aNRQ_ID = fopen('raiz_quad.txt', 'w', 'n');

fprintf(aNRQ_ID, "Nro\t\tRaíz Quadrada\n");
for num = 1 : 100
  fprintf(aNRQ_ID, "%i\t\t%.8f\n", num, sqrt(num));
endfor
fclose(aNRQ_ID);
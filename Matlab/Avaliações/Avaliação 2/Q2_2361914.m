% Aluno: Pedro Henrique Matias
% RA: 2361914 | Datas: 10/08/2021
% Avaliação 2 - Algoritmos

## Questão 2 - Vetor Par e Ímpar
clear
clc
disp("Separa Vetores em Par e Ímpar");

dimen = 20;
vetor_par = [];
vetor_impar = [];

## entrada / processamento -> lê valores e os coloca no respectivo vetor
for contador = 1 : dimen
   entrada = input(sprintf("Digite o %dº valor: ", contador));
   
   if rem(entrada, 2) == 0
     vetor_par(end+1) = entrada;
   else
     vetor_impar(end+1) = entrada;
   endif

endfor

## saída -> mostra vetores
clc
printf("Vetor Ímpar: [")
printf(" %i ", vetor_impar(:));
printf("]\nVetor Par: [");
printf(" %i ", vetor_par(:));
printf("]\n");

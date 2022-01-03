% Aluno: Pedro Henrique Matias
% RA: 2361914 | Datas: 10/08/2021
% Avalia��o 2 - Algoritmos

## Quest�o 2 - Vetor Par e �mpar
clear
clc
disp("Separa Vetores em Par e �mpar");

dimen = 20;
vetor_par = [];
vetor_impar = [];

## entrada / processamento -> l� valores e os coloca no respectivo vetor
for contador = 1 : dimen
   entrada = input(sprintf("Digite o %d� valor: ", contador));
   
   if rem(entrada, 2) == 0
     vetor_par(end+1) = entrada;
   else
     vetor_impar(end+1) = entrada;
   endif

endfor

## sa�da -> mostra vetores
clc
printf("Vetor �mpar: [")
printf(" %i ", vetor_impar(:));
printf("]\nVetor Par: [");
printf(" %i ", vetor_par(:));
printf("]\n");

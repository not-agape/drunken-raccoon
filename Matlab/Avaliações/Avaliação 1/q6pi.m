% Avaliação 1 - Algoritmos
% Aluno: Pedro Henrique Matias
% RA: 2361914

clear
clc

disp("Calcula Pi com base na soma de termos.");
 
##entrada
n = input("Insira o número de termos desejado para aproximação: ");
somapi = 0;

##processamento - somatório de 0 -> n-1
for i=0:n-1
  %quando par, soma; ímpar, subtraí -> realizado pelo -1^i
  somapi += 4*(power(-1, i)/(2*i + 1));
endfor

##saída
printf("Aproximação de Pi com %d termos: %d\n\n", n, somapi);
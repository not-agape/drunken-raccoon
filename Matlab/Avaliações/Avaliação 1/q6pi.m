% Avalia��o 1 - Algoritmos
% Aluno: Pedro Henrique Matias
% RA: 2361914

clear
clc

disp("Calcula Pi com base na soma de termos.");
 
##entrada
n = input("Insira o n�mero de termos desejado para aproxima��o: ");
somapi = 0;

##processamento - somat�rio de 0 -> n-1
for i=0:n-1
  %quando par, soma; �mpar, subtra� -> realizado pelo -1^i
  somapi += 4*(power(-1, i)/(2*i + 1));
endfor

##sa�da
printf("Aproxima��o de Pi com %d termos: %d\n\n", n, somapi);
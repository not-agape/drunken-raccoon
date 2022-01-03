% Aluno: Pedro Henrique Matias
% RA: 2361914 | Data: 10/08/2021
% Avalia��o 2 - Algoritmos

## Quest�o 4 - Substitui Espa�os
clear
clc
disp("Troca espa�os por sublinha");

## entrada -> frase fornecida pelo usu�rio
frase = input("Digite uma frase: ", 's');

## processamento -> troca os espa�os da frase por underline (sublinha)
nova_frase = strrep(frase, ' ', '_');

## sa�da -> mostra resultado
printf("Frase modificada: %s\n", nova_frase);






















## easter_egg
if strcmp(frase, nova_frase)
  printf("> Mudou muito. Quase irreconhec�vel.\n\n");
endif
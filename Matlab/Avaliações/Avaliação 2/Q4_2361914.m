% Aluno: Pedro Henrique Matias
% RA: 2361914 | Data: 10/08/2021
% Avaliação 2 - Algoritmos

## Questão 4 - Substitui Espaços
clear
clc
disp("Troca espaços por sublinha");

## entrada -> frase fornecida pelo usuário
frase = input("Digite uma frase: ", 's');

## processamento -> troca os espaços da frase por underline (sublinha)
nova_frase = strrep(frase, ' ', '_');

## saída -> mostra resultado
printf("Frase modificada: %s\n", nova_frase);






















## easter_egg
if strcmp(frase, nova_frase)
  printf("> Mudou muito. Quase irreconhecível.\n\n");
endif
% Avalia��o 1 - Algoritmos
% Aluno: Pedro Henrique Matias
% RA: 2361914

clear
clc

disp("Calcula sal�rio");

##entrada - recebe os valores do usu�rio
funcionario = input("Funcion�rio: ", "s");
salario = input("Sal�rio Atual: ");

##processamento -> 1.05 para aumento de 5% / 0.91 para redu��o de 9%
salario *= 1.05;
salario *= 0.91;

##sa�da - exibe o nome e o sal�rio reajustado do funcion�rio
printf("O sal�rio reajustado de %s � de R$:%d\n\n", funcionario, salario);
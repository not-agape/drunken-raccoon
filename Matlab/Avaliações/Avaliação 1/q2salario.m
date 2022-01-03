% Avaliação 1 - Algoritmos
% Aluno: Pedro Henrique Matias
% RA: 2361914

clear
clc

disp("Calcula salário");

##entrada - recebe os valores do usuário
funcionario = input("Funcionário: ", "s");
salario = input("Salário Atual: ");

##processamento -> 1.05 para aumento de 5% / 0.91 para redução de 9%
salario *= 1.05;
salario *= 0.91;

##saída - exibe o nome e o salário reajustado do funcionário
printf("O salário reajustado de %s é de R$:%d\n\n", funcionario, salario);
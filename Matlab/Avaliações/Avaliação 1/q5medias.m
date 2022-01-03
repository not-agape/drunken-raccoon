% Avaliação 1 - Algoritmos
% Aluno: Pedro Henrique Matias
% RA: 2361914

clear
clc

disp("Calcula médias de 3 valores");

##entrada
a = input("Insira o primeiro número: ");
b = input("Insira o segundo número: ");
c = input("Insira o terceiro número: ");

##processamento
ma = (a + b + c)/3;
mh = 3/(a^-1 + b^-1 + c^-1);
mg = nthroot(a*b*c, 3);
mp = (1*a + 2*b + 3*c)/6;

##saída
clc
disp("Calcula médias de 3 valores");
printf("Exibindo as médias dos números {%d, %d, %d}:\
  \nMédia       | Valor\
  \n>Aritmética | %d\
  \n>Harmônica  | %d\
  \n>Geométrica | %d\
  \n>Ponderada  | %d\n\n", a, b, c, ma, mh, mg, mp);
% Avalia��o 1 - Algoritmos
% Aluno: Pedro Henrique Matias
% RA: 2361914

clear
clc

disp("Calcula m�dias de 3 valores");

##entrada
a = input("Insira o primeiro n�mero: ");
b = input("Insira o segundo n�mero: ");
c = input("Insira o terceiro n�mero: ");

##processamento
ma = (a + b + c)/3;
mh = 3/(a^-1 + b^-1 + c^-1);
mg = nthroot(a*b*c, 3);
mp = (1*a + 2*b + 3*c)/6;

##sa�da
clc
disp("Calcula m�dias de 3 valores");
printf("Exibindo as m�dias dos n�meros {%d, %d, %d}:\
  \nM�dia       | Valor\
  \n>Aritm�tica | %d\
  \n>Harm�nica  | %d\
  \n>Geom�trica | %d\
  \n>Ponderada  | %d\n\n", a, b, c, ma, mh, mg, mp);
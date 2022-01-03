% Avalia��o 1 - Algoritmos
% Aluno: Pedro Henrique Matias
% RA: 2361914

clear
clc

disp("N�mero Perfeito");
printf("Um n�mero perfeito tem a soma de seus divisores (exceto ele pr�prio) iguais ao seu valor.\n");

##entrada
numero = input("Insira um n�mero para descobrir se � perfeito ou n�o: ");
soma = 0;

##processamento - testa em la�o at� numero/2 quais s�o seus divisores
for i = 1:numero/2
  if rem(numero, i) == 0
    soma += i;
  endif
endfor

##processamento + sa�da - verifica se soma � igual ao valor inserido
if soma == numero
  printf("O n�mero %d � perfeito!\n\n", numero);
else
  printf("O n�mero %d n�o � perfeito!\n\n", numero);
endif
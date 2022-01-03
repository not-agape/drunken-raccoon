% Avaliação 1 - Algoritmos
% Aluno: Pedro Henrique Matias
% RA: 2361914

clear
clc

disp("Número Perfeito");
printf("Um número perfeito tem a soma de seus divisores (exceto ele próprio) iguais ao seu valor.\n");

##entrada
numero = input("Insira um número para descobrir se é perfeito ou não: ");
soma = 0;

##processamento - testa em laço até numero/2 quais são seus divisores
for i = 1:numero/2
  if rem(numero, i) == 0
    soma += i;
  endif
endfor

##processamento + saída - verifica se soma é igual ao valor inserido
if soma == numero
  printf("O número %d é perfeito!\n\n", numero);
else
  printf("O número %d não é perfeito!\n\n", numero);
endif
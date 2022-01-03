% Avalia��o 1 - Algoritmos
% Aluno: Pedro Henrique Matias
% RA: 2361914

clear
clc

disp("Identifica Quadrante de um Ponto Real no Plano");

##entrada
x = input("Insira a coordenada X do Ponto: ");
y = input("Insira a coordenada Y do Ponto: ");

##processamento + sa�das
if x == 0 && y == 0
  printf("O Ponto P(%d, %d) est� na Origem do Sistema!\n\n", x, y);
elseif x == 0
  printf("O Ponto P(%d, %d) pertence ao Eixo das Abscissas (Ox)!\n\n", x, y);
elseif y == 0
  printf("O Ponto P(%d, %d) pertence ao Eixo das Ordenadas (Oy)!\n\n", x, y);
elseif x > 0
  if y > 0
    printf("O Ponto P(%d, %d) est� no Primeiro Quadrante!\n\n", x, y);
  else
    printf("O Ponto P(%d, %d) est� no Quarto Quadrante!\n\n", x, y);
  endif
elseif x < 0
  if y > 0
    printf("O Ponto P(%d, %d) est� no Segundo Quadrante!\n\n", x, y);
  else
    printf("O Ponto P(%d, %d) est� no Terceiro Quadrante!\n\n", x, y);
  endif
endif 
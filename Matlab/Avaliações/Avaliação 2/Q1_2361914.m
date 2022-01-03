% Aluno: Pedro Henrique Matias
% RA: 2361914 | Datas: 10/08/2021
% Avaliação 2 - Algoritmos

## Questão 1 - Soma Diagonal Principal e Secundária
clear
clc
disp("Soma Diagonal Principal e Secundária");

## entrada -> ler uma matriz NxN (1 <= N <= 10)
dimen = input("Digite a Dimensão \'n\' para a matriz quadrada: ");
if ~(dimen >= 0 && dimen <= 10)
 printf("A dimensão deve estar compreendida entre 0 e 10.\n");
 return;
endif

A = zeros(dimen);    % inicializador

for linha = 1 : dimen
  for coluna = 1 : dimen
    A(linha, coluna) = input(sprintf("Insira (%d, %d): ", linha, coluna));
  endfor
endfor

## processamento -> soma das diagonais

diag_p = 0;
diag_s = 0;

for linha = 1 : dimen
  for coluna = 1 : dimen
    if linha == coluna                  % para identificar a primária
      diag_p += A(linha, coluna);
    endif
    if (linha + coluna) == rows(A)+ 1   % para identificar a secundária
      diag_s += A(linha, coluna);
    endif
  endfor
endfor

## saída -> matriz e resultados
clc
printf("A Matriz ");
A
printf("Diagonal Principal = %d", diag_p);
printf("\nDiagonal Secundária = %d\n", diag_s);


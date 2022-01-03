% Aluno: Pedro Henrique Matias
% RA: 2361914 | Data: 11/08/2021
% Segunda APS de Algoritmos de 2021

clear
clc
disp("Histograma: Contador da incidência de cada letra em uma frase.");

##entrada -> usuário fornece uma frase (podem haver letras maiúsculas)
fraseUser = input("Frase: ", 's');

##processamento -> tratar letras maiúsculas e contar suas ocorrências.
% converte a entrada para letras minusculas.
fraseTratada = tolower(fraseUser);

% conta o número de vezes que cada letra apareceu
for letra = 97 : 122
  nIncidencias = 0;     %contador reseta sempre que trocar de letra
  
  for posicao = 1 : length(fraseTratada)
    if strcmp(char(letra), fraseTratada(posicao))
      nIncidencias++;
    endif
  endfor
  
##saída -> retorna o número de vezes que cada letra apareceu
  % pula de linha a cada 3 colunas
  if rem(letra-96, 3) != 0   
    printf("|%c: %i|\t", char(letra), nIncidencias);
  else
    printf("|%c: %i|\n", char(letra), nIncidencias);
  endif
  
##  % versão limpa -> não mostra as incidencias = 0
##  if nIncidencias != 0   
##    printf("%c: %i|\n", char(letra), nIncidencias);
##  endif

endfor

printf("\n");

% Aluno: Pedro Henrique Matias
% RA: 2361914 | Data: 11/08/2021
% Segunda APS de Algoritmos de 2021

clear
clc
disp("Histograma: Contador da incid�ncia de cada letra em uma frase.");

##entrada -> usu�rio fornece uma frase (podem haver letras mai�sculas)
fraseUser = input("Frase: ", 's');

##processamento -> tratar letras mai�sculas e contar suas ocorr�ncias.
% converte a entrada para letras minusculas.
fraseTratada = tolower(fraseUser);

% conta o n�mero de vezes que cada letra apareceu
for letra = 97 : 122
  nIncidencias = 0;     %contador reseta sempre que trocar de letra
  
  for posicao = 1 : length(fraseTratada)
    if strcmp(char(letra), fraseTratada(posicao))
      nIncidencias++;
    endif
  endfor
  
##sa�da -> retorna o n�mero de vezes que cada letra apareceu
  % pula de linha a cada 3 colunas
  if rem(letra-96, 3) != 0   
    printf("|%c: %i|\t", char(letra), nIncidencias);
  else
    printf("|%c: %i|\n", char(letra), nIncidencias);
  endif
  
##  % vers�o limpa -> n�o mostra as incidencias = 0
##  if nIncidencias != 0   
##    printf("%c: %i|\n", char(letra), nIncidencias);
##  endif

endfor

printf("\n");

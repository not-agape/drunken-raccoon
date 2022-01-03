% AV3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914 - Data: 25/08/2021

## Questão 1: Grava Recorde de Pontuação

## entrada -> usuário insere dados
nome = input("Seu nome: ", 's');

while (pts = input("Pontuação Obtida: ")) < 0
  printf("Insira uma pontuação positiva!\n");
endwhile

## saída -> gravação no disco dos dados
recorde_ID = fopen('config.ini', 'a');

fprintf(recorde_ID, "[record]\n");
fprintf(recorde_ID, "name=%s\n", nome);
fprintf(recorde_ID, "points=%i\n", pts);

fclose(recorde_ID);
%| Autor: Pedro Henrique Matias
%| Data: 7/7/21
%| APS1: Jogo dos Dados

clear
clc
printf("====================\n== Jogo dos Dados ==\n====================\n");

do
  
  printf("[1] - Jogar\n[2] - Sobre\n[Qualquer outro n�mero] - Sair\n\n");
  op = input("Op��o: ");
  clc
  
  switch(op)
  ##Caso: Jogar
  case 1
    pontos = 0;
    conceito = '';
    for i = 1:10
    
      printf("=============\n= Fase %d/10 =\n=============\n\n", i);
      
      d1 = 1+round(rand()*5);
      d2 = 1+round(rand()*5);
      d3 = 1+round(rand()*5);
      soma = d1 + d2 + d3;
      
      printf("A soma dos tr�s dados �: %i.\n\n", soma);
      
      p1 = input("Palpite da face do primeiro dado: ");
      p2 = input("Palpite da face do segundo dado: ");
      p3 = input("Palpite da face do terceiro dado: ");
      clc

      if ((p1 == d1 && p2 == d2 && p3 == d3)
        ||(p1 == d1 && p2 == d3 && p3 == d2)
        ||(p1 == d2 && p2 == d1 && p3 == d3)
        ||(p1 == d2 && p2 == d3 && p3 == d1)
        ||(p1 == d3 && p2 == d1 && p3 == d2)
        ||(p1 == d3 && p2 == d2 && p3 == d1))  
        pontos++;
        printf("Jogo dos Dados: Parab�ns voc� acertou!\n\n");     
      
      else 
        printf("Jogo dos Dados: Lamento, n�o foi dessa vez!\nOs valores corretos eram [D1, D2, D3] = [%i, %i, %i].\n\n", d1, d2, d3);
      
      endif    
    endfor
   
    ###Define conceito
    if (pontos == 10)
      conceito = 'A';
    elseif (pontos == 9 || pontos == 8)
      conceito = 'B';
    elseif (pontos == 7 || pontos == 6)
      conceito = 'C';
    elseif (pontos <= 5 && pontos >= 3)
      conceito = 'D';
    else
      conceito = 'E';
    endif
    
    printf("==============================================\n");
    printf("== Voc� acertou %d/10, seu conceito foi [%c]! ==\n", pontos, conceito);
    printf("==============================================\n\n");
    
    printf("Deseja jogar novamente?\n");
    
  ##Caso: Sobre  
  case 2
    printf("============\n== Sobre ==\n============\n\n");
    printf("  Jogo de Dados � uma avalia��o da mat�ria de algoritmos do curso de engenharia mecatr�nica da UTFPR. \
Este, por sua vez, consiste de uma aplica��o onde o jogador, com as informa��es exibidas, tem de adivinhar \
quais faces os rolamentos de dados resultaram. Ent�o, ap�s 10 'rounds', a pontua��o � exibida e o jogador � \
conceituado em um ranking, que varia de A � E, conforme regra abaixo:\n\n");
    printf("Pontos   | Conceito\n{10}     | A\n{9, 8}   | B\n{7, 6}   | C\n{5, 4, 3}| D\n{2, 1, 0}| E\n\n");
    printf("O que deseja fazer?\n");
  
  %Sair
  otherwise
    printf("Obrigado por jogar 'Jogo de Dados'!\n\n");
    break;
  endswitch  
until(false)














##Jogo complet�o, tem at� easteregg
##???????????????????????????
##???????????????????????????
##???????????????????????????
##???????????????????????????
##????????????????????????????
##?????????????????????????????
##????????????????????????????? 
##????????????????????????????? 
##?????????????????????????????? 
##?????????????????????????????? 
##????????????????????????????? 
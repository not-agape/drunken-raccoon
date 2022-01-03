%| Autor: Pedro Henrique Matias
%| Data: 7/7/21
%| APS1: Jogo dos Dados

clear
clc
printf("====================\n== Jogo dos Dados ==\n====================\n");

do
  
  printf("[1] - Jogar\n[2] - Sobre\n[Qualquer outro número] - Sair\n\n");
  op = input("Opção: ");
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
      
      printf("A soma dos três dados é: %i.\n\n", soma);
      
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
        printf("Jogo dos Dados: Parabéns você acertou!\n\n");     
      
      else 
        printf("Jogo dos Dados: Lamento, não foi dessa vez!\nOs valores corretos eram [D1, D2, D3] = [%i, %i, %i].\n\n", d1, d2, d3);
      
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
    printf("== Você acertou %d/10, seu conceito foi [%c]! ==\n", pontos, conceito);
    printf("==============================================\n\n");
    
    printf("Deseja jogar novamente?\n");
    
  ##Caso: Sobre  
  case 2
    printf("============\n== Sobre ==\n============\n\n");
    printf("  Jogo de Dados é uma avaliação da matéria de algoritmos do curso de engenharia mecatrônica da UTFPR. \
Este, por sua vez, consiste de uma aplicação onde o jogador, com as informações exibidas, tem de adivinhar \
quais faces os rolamentos de dados resultaram. Então, após 10 'rounds', a pontuação é exibida e o jogador é \
conceituado em um ranking, que varia de A à E, conforme regra abaixo:\n\n");
    printf("Pontos   | Conceito\n{10}     | A\n{9, 8}   | B\n{7, 6}   | C\n{5, 4, 3}| D\n{2, 1, 0}| E\n\n");
    printf("O que deseja fazer?\n");
  
  %Sair
  otherwise
    printf("Obrigado por jogar 'Jogo de Dados'!\n\n");
    break;
  endswitch  
until(false)














##Jogo completão, tem até easteregg
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
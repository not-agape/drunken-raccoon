% Aluno: Pedro Henrique Matias
% RA: 2361914 | Data: 10/08/2021
% Avalia��o 2 - Algoritmos

## Quest�o 3 - Separa e checa e-mail
clear
clc
disp("Testa Dom�nio");

## entrada -> usu�rio fornece um e-mail
user_email = input("Digite um e-mail: ", 's');
str_teste = '@gmail.com';

## processamento / sa�da -> separa em duas strings e testa por "@gmail.com"
[user_nome, email_dominio] = strtok(user_email, '@');
printf("Nome de Usu�rio: %s\nDom�nio: %s\n", user_nome, email_dominio);
  
if strcmp(email_dominio, str_teste)
  printf("O endere�o de e-mail informado � do Gmail.\n");
endif
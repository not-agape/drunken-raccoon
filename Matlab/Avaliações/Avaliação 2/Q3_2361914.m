% Aluno: Pedro Henrique Matias
% RA: 2361914 | Data: 10/08/2021
% Avaliação 2 - Algoritmos

## Questão 3 - Separa e checa e-mail
clear
clc
disp("Testa Domínio");

## entrada -> usuário fornece um e-mail
user_email = input("Digite um e-mail: ", 's');
str_teste = '@gmail.com';

## processamento / saída -> separa em duas strings e testa por "@gmail.com"
[user_nome, email_dominio] = strtok(user_email, '@');
printf("Nome de Usuário: %s\nDomínio: %s\n", user_nome, email_dominio);
  
if strcmp(email_dominio, str_teste)
  printf("O endereço de e-mail informado é do Gmail.\n");
endif
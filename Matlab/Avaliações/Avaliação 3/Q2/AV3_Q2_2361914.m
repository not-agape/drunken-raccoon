% AV3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914 - Data: 25/08/2021

## Questão 2: Peso Ideal

clear
clc

## entrada -> leitura do arquivo pessoas.txt
## -----------------------------------------

pessoas = [];

% teste do arquivo
if (aPessoas_ID = fopen('pessoas.txt', 'r', 'n', 'UTF-8')) == -1
  printf("\n*Certifique-se que o arquivo 'pessoas.txt' encontra-se no mesmo diretório.*\n\n");
endif

## processamento -> importação dos dados e cálculo do peso ideal
## -------------------------------------------------------------

cNome = [];
cSexo = [];
cPeso = [];
cAlt = [];

% importação dos dados
while !feof(aPessoas_ID)
  pessoas{end+1} = fgets(aPessoas_ID);
endwhile
fclose(aPessoas_ID);

% divisão dos dados em seus respectivos campos
for contPessoas = 1 : length(pessoas)
  temp = strsplit(pessoas{contPessoas}, ";");
  [cNome{contPessoas}, cSexo{contPessoas}, cAlt{contPessoas}] = temp{1:3};  
  
  % calcula peso ideal
  cPeso{contPessoas} = pesoIdeal(str2double(temp{3}), temp{2});
endfor

## saída -> exportação dos dados 
## -----------------------------

aSaida_ID = fopen('dados.txt', 'w', 'n', 'UTF-8');
for contPessoas = 1 : length(pessoas)
  fprintf(aSaida_ID, "Nome..........: %s\n", cNome{contPessoas});
  
  % testa para M e F
  if strcmp(cSexo{contPessoas}, 'M')
    fprintf(aSaida_ID, "Sexo..........: masculino\n");
  elseif strcmp(cSexo{contPessoas}, 'F')
    fprintf(aSaida_ID, "Sexo..........: feminino\n");
  else
    fprintf(aSaida_ID, "Sexo..........: ??\n");
  endif
  
  fprintf(aSaida_ID, "Altura........: %.2fm\n", str2double(cAlt{contPessoas}));
  fprintf(aSaida_ID, "Peso Ideal....: %.2fkgs\n\n", cPeso{contPessoas}); 

endfor
fclose(aSaida_ID);
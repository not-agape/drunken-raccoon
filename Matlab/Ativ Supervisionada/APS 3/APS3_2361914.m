## APS3 - Algoritmos (S15)
## Nome: Pedro Henrique Matias
## RA: 2361914   | Data: 25/08/2021

clear
clc

## entrada - leitura dos arquivos de texto
## ---------------------------------------

% checa a existência dos arquivos e os abre
if (nomes_ID = fopen('nomes.txt', 'r', 'n', 'UTF-8')) == -1 ...
  || (n1_ID = fopen('notas1.txt', 'r', 'n', 'UTF-8')) == -1 ...
  || (n2_ID = fopen('notas2.txt', 'r', 'n', 'UTF-8')) == -1 
    printf("Certifique-se que os arquivos 'nomes.txt', 'notas1.txt' e 'notas2.txt' encontram-se no mesmo diretório que o executável.\n");
endif
[cNome, cN1, cN2] = abreArq(nomes_ID, n1_ID, n2_ID);

## processamento - organizar, calcular e salvar nomes e notas
## ----------------------------------------------------------

mMed = [];
cStatus = [];

% ordena os dados por RA crescente
cNome = sort(cNome);
cN1 = sort(cN1);
cN2 = sort(cN2);

% calculo das médias e atribuição dos status
for aluno = 1 : length(cNome)
  mMed(end+1) = calculaMedia(cN1{aluno}, cN2{aluno});
  cStatus{end+1} = statusAluno(mMed(end));
endfor

## saída - gravar em arquivo de texto e mostrar na tela
## ----------------------------------------------------

livro_ID = fopen('livro_notas.txt', 'w');

% montagem do output
fprintf(livro_ID, "   RA   | Nota #1 | Nota #2 | Média | Status | Nome\n");

for aluno = 1 : length(cNome)
   
   nome = strsplit(cNome{aluno}, ";");
   n1 = strsplit(cN1{aluno}, ";");
   n2 = strsplit(cN2{aluno}, ";");
   
   fprintf(livro_ID, "%8i|%8.1f |%8.1f |%6.1f | '%4s' | %s\n", ...
    str2num(nome{1}), ...       %RA
    str2double(n1{2}), ...      %N1
    str2double(n2{2}), ...      %N2
    mMed(aluno), ...            %Média
    cStatus{aluno}, ...         %Status
    nome{2});                   %Nome

endfor
fclose(livro_ID);

% display do que foi gravado em .txt e salva o arquivo
livro_ID = fopen('livro_notas.txt', 'r');
while(!feof(livro_ID))
  linha = fgetl(livro_ID);
  printf("%s\n", linha);
endwhile
fclose(livro_ID);
% Aluno: Pedro Henrique Matias
% RA: 2361914 | Data: 10/08/2021
% Avalia��o 2 - Algoritmos

## Quest�o 5 - Notas
clear
clc
disp("Analisa notas finais");
dimen = 20;

## entrada -> salva as notas fornecidas pelo usu�rio em um vetor
notas = [];
for contador = 1 : dimen
   entrada = input(sprintf("Digite a nota do %d� aluno(a): ", contador));
    
   % testa por notas v�lidas
   if entrada >= 0 && entrada <= 10
     notas(contador) = entrada;
   else
     printf("[Insira uma nota entre 0 - 10]\n");
     entrada = input(sprintf("Digite a nota do %d� aluno(a): ", contador));
     if entrada >= 0 && entrada <= 10
       notas(contador) = entrada;
     else
       printf("A� fica d�ficil. Vai ficar com zero esse aluno.\n");
     endif    
   endif
   
endfor

## processamento -> max/min/med e contador de acima da media
%nota_max = max(notas);
%nota_min = min(notas);
%nota_med = mean(notas);

nota_max = 0;
nota_min = 10;
nota_soma = 0;
nota_med = 0;

for contador = 1 : dimen    % length(notas) == dimen ~(idealmente).~
  
  if notas(contador) > nota_max
    nota_max = notas(contador);
  elseif notas(contador) < nota_min
    nota_min = notas(contador);
  endif
  
  nota_soma += notas(contador);

endfor

nota_med = nota_soma / length(notas);

## sa�da -> mostra resultados
clc

melhores_resultados = find(notas == nota_max);
piores_resultados = find(notas == nota_min);
media_resultados = find(notas >= nota_med);
n_media_resultados = length(media_resultados);

printf("Resultados para [");
printf(" %d ", notas(:));

% menor
printf("]:\n\nMenor Nota: %d -> [Aluno(s): [", nota_min);
printf(" %i ", piores_resultados);
printf("]\n");

% maior
printf("Maior Nota: %d -> [Aluno(s): [", nota_max);
printf(" %i ", melhores_resultados);
printf("]\n");

% media
printf("M�dia das Notas: %d -> [Aluno(s): [", nota_med);
printf(" %i ", media_resultados);
printf("]\nAlunos acima da m�dia: %i\n\n", n_media_resultados);
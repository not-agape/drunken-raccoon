% APS3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914   | Data: 25/08/2021

## Função Aprovação

function status = statusAluno(media)
  
  % para alterar caso a nota mínima mude
  nota_min = 6;
  
  if media >= nota_min
    status = 'apr.';
  else
    status = 'rep.';
  endif
endfunction
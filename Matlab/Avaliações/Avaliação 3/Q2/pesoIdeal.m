% AV3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914 - Data: 25/08/2021

## Questão 2: Peso Ideal -> Função Calcula Peso Ideal

function pesoIdeal = pesoIdeal(altura, sexo)
  sexoPessoa = cellstr(sexo);
  if strcmp(sexo, 'M')
    pesoIdeal = 72.7 * altura - 58;
  elseif strcmp(sexo, 'F')
    pesoIdeal = 62.1 * altura - 44.7;
  else
    printf("Erro! Sexo deve estar no formato: 'M' ou 'F'.\n");
    pesoIdeal = null;
  endif
endfunction
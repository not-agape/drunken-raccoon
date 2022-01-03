% AV3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914 - Data: 25/08/2021

## Quest�o 4: Fun��o Calcula Conceito

function conceito = calculaConceito(n1, n2, n3)
  
  % chamada da fun��o CalculaMedia Arit.
  media = calculaMediaA(n1, n2, n3);

  switch (true)
    case media < 7
      conceito = 'D';
    case media >= 7 && media < 8
      conceito = 'C';
    case media >= 8 && media < 9
      conceito = 'B';
    case media >= 9
      conceito = 'A';
  endswitch
  
endfunction
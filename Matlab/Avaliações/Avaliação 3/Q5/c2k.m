% AV3 - Algoritmos (S15)
% Nome: Pedro Henrique Matias
% RA: 2361914 - Data: 25/08/2021

## Questão 5: Função ºC -> K, ºF

function [kelvin, fahr] = c2k(celsius)
  fahr = 9/5*celsius + 32;
  kelvin = celsius + 273;
endfunction
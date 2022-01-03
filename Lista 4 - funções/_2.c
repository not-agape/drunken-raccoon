//escreva apenas a função!
float calculaTarifa(float valorCheio, int idade){
    if (idade < 2)
        return 0;
    else if (idade >= 2 && idade < 6)
        return (valorCheio *0.5);
    else
        return valorCheio;
}
//implemente apenas a função!
int somaVetor(int* vet, int n){
    int soma = 0;
    
    for (int pos = 0; pos < n; pos++){
        soma += vet[pos];
    }
    
    return soma;
}
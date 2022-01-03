//implemente apenas a função!
int contaZeros(int* vet, int n){
    
    int contador = 0;
    
    for (int pos = 0; pos < n; pos++){
        if (vet[pos] == 0)
            contador++;
    }
    
    return contador;

}
//implemente apenas a função!
int contaCaractere(char ch){
    
    int ocorrencias = 0;
    char temp[100];
    
    scanf(" %[^\n]s", temp);
    
    for (int pos = 0; temp[pos] != '\0'; pos++){
        if (ch == temp[pos])
            ocorrencias++;
    }
    
    return ocorrencias;
}
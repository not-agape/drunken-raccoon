void imprimeAlfabeto(char ch){
    
    if (ch < 'A' || (ch > 'Z' && ch < 'a') || ch > 'z'){
        printf("ERRO\n");
    } else {
        if (ch >= 'A' && ch <= 'Z'){
            for (char temp = ch; temp <= 'Z'; temp++){
                printf("%c ", temp);
            }
        } else {
            for (char temp = ch; temp <= 'z'; temp++){
                printf("%c ", temp);
            }
        }
    }
    
}
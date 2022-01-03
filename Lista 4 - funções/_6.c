int encontraZero( ){
    
    int temp, contador = 0;
    
    do {
        scanf(" %d", &temp);
        contador++;
    } while (temp != 0);
    
    return (contador -1);
    
}
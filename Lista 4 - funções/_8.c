void printBitsUmNoMeio(int n){
    if (n >= 3 && n <= 99 && n % 2 != 0) {
        for (int pos = 0; pos < n; pos++){
            if (pos == (n-1)/2)
                printf("1");
            else
                printf("0");
        }
    }
}
#include <stdio.h>
#define tamanho 8

int contaLeds(char num[])
{
    int contadorLeds = 0;

    for (int posicao = 0;  num[posicao] != '\0'; posicao++)
        switch (num[posicao])
        {
        case 49: // 1
            contadorLeds += 2;
            break;
        
        case 50: // 2
            contadorLeds += 5;
            break;
        
        case 51: // 3
            contadorLeds += 5;
            break;
        
        case 52: // 4
            contadorLeds += 4;
            break;
        
        case 53: // 5
            contadorLeds += 5;
            break;
        
        case 54: // 6
            contadorLeds += 6;
            break;
        
        case 55: // 7
            contadorLeds += 3;
            break;
        
        case 56: // 8
            contadorLeds += 7;
            break;
        
        case 57: // 9
            contadorLeds += 6;
            break;
        
        case 48: // 0
            contadorLeds += 6;
            break;
        
        default: break;
        }

    return contadorLeds;
}

// questão 2: conta LEDs
int main()
{

    int numCasos;
    scanf(" %d", &numCasos);

    char numTeste[numCasos][tamanho];

    for (int posicao = 0; posicao < numCasos; posicao++)
        scanf(" %s", numTeste[posicao]);

    for (int posicao = 0; posicao < numCasos; posicao++)
        printf("%d leds\n", contaLeds(numTeste[posicao]));
    
    return 1;
}
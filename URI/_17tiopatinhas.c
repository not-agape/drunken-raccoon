#include <stdio.h>

// questão 17: identifica o sobrinho do meio do tio patinhas
int main()
{

    int sobHuguinho;
    int sobZezinho;
    int sobLuisinho;
    
    scanf(" %d %d %d", &sobHuguinho, &sobZezinho, &sobLuisinho);

    if (sobHuguinho > sobLuisinho && sobHuguinho > sobZezinho)
    {
        if (sobLuisinho > sobZezinho)
            printf("luisinho\n");
        else
            printf("zezinho\n");
    }
    
    else if (sobLuisinho > sobHuguinho && sobLuisinho > sobZezinho)
    {   
        if (sobHuguinho > sobZezinho)
            printf("huguinho\n");
        else
            printf("zezinho\n");
    }
    
    else if (sobZezinho > sobLuisinho && sobZezinho > sobHuguinho)
    {
        if (sobLuisinho > sobHuguinho)
            printf("luisinho\n");
        else
            printf("huguinho\n");
    }

    return 1;
}
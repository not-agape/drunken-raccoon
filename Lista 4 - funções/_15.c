#include <stdio.h>

void ordena(int v[], int n, char ordem){
    
    int vetortemp[n], temp, posicao;
    _Bool vetorflag[n];      	
      
    switch (ordem) {
        // crescente
        case 'c':
        
        	// percorre o vetor temporário
    		for (int pos =0; pos <n; pos++) {
				
				// inicializador baixo para a comparação
				temp =-100;
		
        		// percorre o vetor
    			for (int pos2 =0; pos2 <n; pos2++) {
    				// se maior que temp e ainda não utilizado
    				if (temp <= v[pos2] && !vetorflag[pos2]){
		    			temp = v[pos2];
				    	posicao = pos2;
        			}
       		 	}
        
        		// salva o maior número e grava a flag da posição
        		vetortemp[pos] = temp;
        		vetorflag[posicao] = 1;
	
			}
    
    		// passa os valores da temp para o vetor    	
    		for (int pos =0; pos <n; pos++) {
    			v[pos] = vetortemp[pos];
    		}
    		
        	break;
        
        // decrescente
        case 'd':
        	
        	// percorre o vetor temporário
    		for (int pos =0; pos <n; pos++) {
				
				// inicializador alto para a comparação
				temp =100;
		
        		// percorre o vetor
    			for (int pos2 =0; pos2 <n; pos2++) {
    				// se menor que temp e ainda não utilizado
    				if (temp >= v[pos2] && !vetorflag[pos2]){
		    			temp = v[pos2];
				    	posicao = pos2;
        			}
       		 	}
        
        		// salva o menor número e grava a flag da posição
        		vetortemp[pos] = temp;
        		vetorflag[posicao] = 1;
	
			}
    
    		// passa os valores da temp para o vetor    	
    		for (int pos =0; pos <n; pos++) {
    			v[pos] = vetortemp[pos];
    		}
        	
        	break;
        
        // erro
        default:
        	break;
    }    
}

int main() {

	int v[] = {2,8,6,4,3}, i;

	ordena(v, 5, 'c');
	for(i=0;i<5;i++)
    		printf("%d ",v[i]);

	printf("\n");

	
	ordena(v, 5, 'd');
	for(i=0;i<5;i++)
    		printf("%d ",v[i]);

	
	return 0;
}

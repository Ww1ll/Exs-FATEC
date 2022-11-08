#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float mat[3][3], soma = 0;
	int i, j; 
	
	printf("Este programa...\n");
	
	for( i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Digite numeros positivos:\n");
			scanf("%f", &mat[i][j]);
		while(mat[i][j] < 0){
			printf("\nNumero invalido! Informe novamente");
			scanf("%f", &mat[i][j]);	
			}
				soma = soma + mat[i][j];
		} 
	}
	printf("\n O valor da soma eh igual a: \f", soma);
	
	return 0;
}

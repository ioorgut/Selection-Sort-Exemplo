// Bubble Sort
#include <stdio.h>

int main(){
	int n[5] = {7, 37, 13, 5, 2};
	int i, j, temp;
	
	//Exibição sem ordenação
	printf("Sem Ordenacao: \n");
	for(i=0; i<5; i++){
		printf("[%d] ", n[i]); //Saida = 7, 37, 13, 5, 2
	}
	printf("\n");
	
	//Metodo Selection Sort
	for(i=0; i<4; i++){
		for(j=0; j<5-i-1; j++){
			if(n[j] > n[j+1]){
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
	
	//Exibição com ordenação
	printf("\n");
	printf("Com Ordenacao: \n");
	for(i=0; i<5; i++){
		printf("[%d] ", n[i]); //Saida = 2, 5, 7, 13, 37
	}
	
}

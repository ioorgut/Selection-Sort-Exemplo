// Insertion Sort
#include <stdio.h>

int main(){
	int n[5] = {10, 20, 5, 45, 80};
	int i, j, temp;
	
	//Exibição sem ordenação
	printf("Sem Ordenacao: \n");
	for(i=0; i<5; i++){
		printf("[%d] ", n[i]); //Saida = 10, 20, 5, 45, 80
	}
	printf("\n");
	
	//Metodo Bubble Sort Sort
	for(i=1; i <= 5-1; i++){
		for(j=i; j>0 && n[j-1] > n[j]; j--){
				temp = n[j];
				n[j] = n[j-1];
				n[j-1] = temp;
			}
		}

	
	//Exibição com ordenação
	printf("\n");
	printf("Com Ordenacao: \n");
	for(i=0; i<5; i++){
		printf("[%d] ", n[i]); //Saida = 5, 10, 20, 45, 80
	}
	
}

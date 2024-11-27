// Selection Sort
#include <stdio.h>

int main(){
	int n[5] = {4, 9, 17, 11, 2};
	int i, j, temp;
	
	//Exibição sem ordenação
	printf("Sem Ordenacao: \n");
	for(i=0; i<5; i++){
		printf("[%d] ", n[i]);
	}
	printf("\n");
	
	//Metodo Selection Sort
	for(i=0; i<4; i++){
		for(j=i+1; j<5; j++){
			if(n[j] < n[i]){
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	
	//Exibição com ordenação
	printf("\n");
	printf("Com Ordenacao: \n");
	for(i=0; i<5; i++){
		printf("[%d] ", n[i]);
	}
	
}

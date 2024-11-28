// Selection Sort (Ordenação por Seleção)
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n[5];
	int i, j, temp;
	//Pegando os Numeros a serem ordenados
	for(i=0; i<5; i++){
		printf("Digite o %d° Numero: ", i+1);
		scanf("%d", &n[i]);
	}
	//Exibição sem ordenação
	printf("Sem Ordenacao: \n");
	for(i=0; i<5; i++){
		printf("[%d] ", n[i]); //Saida = 4, 9, 11, 11, 2
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
		printf("[%d] ", n[i]); //Saida = 2, 4, 9, 11, 17
	}	
}

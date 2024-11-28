// Insertion Sort (Ordena��o por Inser��o)
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n[5];
	int i, j, temp;
	//Pegando os Numeros a serem ordenados
	for(i=0; i<5; i++){
		printf("Digite o %d� Numero: ", i+1);
		scanf("%d", &n[i]);
	}
	//Exibi��o sem ordena��o
	printf("Sem Ordenacao: \n");
	for(i=0; i<5; i++){
		printf("[%d] ", n[i]); //Saida = 10, 20, 5, 45, 80
	}
	printf("\n");
	//Metodo Insertion Sort
	for(i=1; i <= 5-1; i++){
		for(j=i; j>0 && n[j-1] > n[j]; j--){
				temp = n[j];
				n[j] = n[j-1];
				n[j-1] = temp;
			}
		}
	//Exibi��o com ordena��o
	printf("\n");
	printf("Com Ordenacao: \n");
	for(i=0; i<5; i++){
		printf("[%d] ", n[i]); //Saida = 5, 10, 20, 45, 80
	}
}

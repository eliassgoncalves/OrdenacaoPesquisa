/*
* 
* Selection Sort em C
*
* Elias Gonçalves
* falarcomelias@gmail.com
*
*/

#include <stdio.h> 
#include <time.h>
#include <stdlib.h>

int minimo_indice(int v[], int i, int tam){
	int min = i;
	int aux;

	for(aux = i+1; aux <= tam; aux++)
		if(v[min] > v[aux])
			min = aux;

	return min;
}

void troca_elemento(int v[], int i, int min){
    int aux = v[i];
    v[i] = v[min];
    v[min] = aux;
}

void imprimir_vetor(int v[], int tam) { 
	int i; 
	for (i=0; i<tam; i++) 
		printf("%d ", v[i]); 
	printf("\n"); 
} 

void selection_sort(int v[], int tam){
	int i;
	for(i=0; i<tam; i++){
		int min = minimo_indice(v, i, tam-1);
		troca_elemento(v, i, min);
	}
}


int main(void){
	int v[50];
	srand(time(NULL));

	for(int i=0; i<50; i++)
		v[i] = 1 + rand() % 100;
	
	int tam = sizeof(v)/sizeof(v[0]);
	printf("Vetor antes: \n"); 
	imprimir_vetor(v, tam);  
	selection_sort(v, tam); 
	printf("\nVetor depois: \n"); 
	imprimir_vetor(v, tam); 
	return 0;
}
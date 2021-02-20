/*
* 
* Insertion Sort com int em C
*
* Elias Gonçalves
* falarcomelias@gmail.com
*
*/

#include <stdio.h> 
#include <time.h>
#include <stdlib.h>

void imprimir_vetor(int v[], int tam) { 
	int i; 
	for (i=0; i<tam; i++) 
		printf("%d ", v[i]); 
	printf("\n"); 
} 

void insertion_sort(int v[], int tam){
    int i;
    for(i=1; i<tam; i++){
        int elemento = v[i];
        int aux = i-1;
        while(aux >= 0 && v[aux] > elemento){
            v[aux+1] = v[aux];
            aux = aux-1;
        }
        v[aux+1] = elemento;
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
	insertion_sort(v, tam); 
	printf("\nVetor depois: \n"); 
	imprimir_vetor(v, tam); 
	return 0;
}
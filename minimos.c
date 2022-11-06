#include <stdio.h>
#include <assert.h>
#include <limits.h> 
void pedirArre(int a[],int x){
	int i=0;
	while(i<x){
	printf("Ingrese entero para la posicion '%d' : \n",i);
	scanf("%d",&a[i]);
	i=i+1;
	}
}

int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int minimo_pares(int a[], int tam){
	int i=0;
	/*Como INT_MAX es un numero impar, si le resto 1 queda par*/
	int minimo = (INT_MAX-1);
	while(i<tam){
		if ((a[i] % 2) == 0){
			minimo = min(minimo, a[i]);
		}
		i++;
	}
	return minimo;
}

int minimo_impares(int a[], int tam){
	int i=0;
	int minimo = (INT_MAX);
	while(i<tam){
		if ((a[i] % 2) != 0){
			minimo = min(minimo, a[i]);
		}
		i++;
	}
	return minimo;
}

int main(){
    int tam; 
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d",&tam);
    int arr[tam];
    pedirArre(arr, tam);
	int minPar = minimo_pares(arr,tam);
	int minImpar = minimo_impares(arr,tam);
	printf("El minimo par es %d, y el minimo impar es %d", minPar, minImpar); 
         
	 return 0;
}
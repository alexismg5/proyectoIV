#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
void imprimeArreglo(int a[], int n_max){
    int i = 0;
    while (i < n_max)
    {
       printf("%d ", a[i]);
       i = i + 1;
    }
}

void pedirArre(int a[],int x){
	int i=0;
	while(i<x){
	printf("Ingrese entero para la posicion '%d' : \n",i);
	scanf("%d",&a[i]);
	i=i+1;
	}
}


void intercambiar(int a[], int tam, int i, int j){
    int x,y;
    if(i <= tam && j <= tam){
        x = a[j]; 
        y = a[i]; 
        a[j] = y; 
        a[i] = x;
    }
}

int main(){
    int tam,j,i; 
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d",&tam);
     printf("Ingrese el valor de i: ");
     scanf("%d",&i);
     if(i>tam){
        printf("Error: i no puede ser mayor a el tamano del arreglo\n");
        
     }else{
        printf("Ingrese el valor de j: ");
        scanf("%d",&j);
        if(j>tam){
            printf("Error: j no puede ser mayor a el tamano del arreglo\n");
         }else{
            int arr[tam];
            pedirArre(arr, tam);
            imprimeArreglo(arr, tam);
            intercambiar(arr, tam, i, j);
            printf("\n");
            imprimeArreglo(arr, tam); 
         }
        
     }
     
    return 0;
}
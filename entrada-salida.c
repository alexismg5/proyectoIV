#include <stdio.h>
#include <assert.h>



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

int main(){

    int a[] = {3,2,3,4,4,5,6,7,8,9}; 
    imprimeArreglo(a , 10);

    return 0;
}
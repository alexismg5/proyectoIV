#include <stdio.h>
#include <assert.h>

void pedirArre(float a[],int tam){
	int j=0;
	float x;
	while(j<tam){
		printf("Ingrese un float para la posicion %d :\n",j);
		
		scanf("%f",&x);
		a[j]=x;
		
		j++;
	}
}


typedef struct datos_t {
float maximo;
float minimo;
float promedio;
}datos; 

datos stats(float a[], int tam){
    datos data; 
    data.maximo = a[0];
    data.minimo = a[0]; 
    float suma = 0; 
    int i = 1; 
    while (i<tam)
    {
        if(data.maximo < a[i]){
            data.maximo = a[i];
             
        }
        else if(data.minimo > a[i]){
            data.minimo = a[i];
            
        }
            suma = suma + a[i];
            i++; 
    }
     
    data.promedio = suma / tam; 
    return data; 
    
}

int main(){
    int tam; 
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d",&tam);
    int arr[tam];
    pedirArre(arr, tam);
	datos dat = stats(arr,tam);
    printf("max -> %f, min -> %f, promedio -> %f", dat.maximo, dat.minimo, dat.promedio);

    return 0;
}
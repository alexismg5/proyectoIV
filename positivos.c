#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int pedirEnt(){
    printf("Ingrese el tamano de su arreglo: \n");
    int n; scanf("%d",&n);
    return n;
}



void pedirArre(int a[],int x){
	int i=1;
	while(i<=x){
	printf("Ingrese entero para la posicion '%d' : \n",i);
	scanf("%d",&a[i]);
	i=i+1;
	}
}

bool existe_positivo(int a[], int tam){
    int i = 0;
    while(i<tam){
        if(a[i] > 0){
            return true;
        }
        else{
            i = i + 1;
        }
    }
    return false;
}

bool todos_positivos(int a[], int tam){
    int i = 0;
    while(i<tam){
        if(a[i] < 0){
            return false;
        }
        else{
            i = i + 1;
        }
    }
    return true;
}

int main(){
	bool resultado;
	int l=pedirEnt();
	int arr[l], x;
	pedirArre(arr,l);
	
	printf("Ingrese 0 para saber si en el arreglo son todos positivos o 1 para saber si existe al menos un positivo : \n");
	scanf("%d",&x);
	
	if(x==1){
		resultado=existe_positivo(arr,l);
		if(resultado){
			printf("Existen positivos");
		}
		else{
			printf("No existen positivos");
		}
	}
	else{
		resultado=todos_positivos(arr,l);
		if(resultado){
			printf("Todos son positivos");
		}
		else{
			printf("No todos son positivos");
		}
	}
	return 0;
}
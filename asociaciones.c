#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;
typedef struct asoc {
clave_t clave;
valor_t valor;
} asociado ;

bool asoc_existe(struct asoc a[], int tam, clave_t c){
    int i = 0; 
    asociado asociados;
    while (i<tam)
    {
        if(c == a[i].clave){
            return true ;
        }else{
            i = i + 1 ;
        }

       return false;
    }
    
}

int main(){
	
	int tam=2;
	struct asoc arr[tam];
	struct asoc p0,p1;
	p1.clave = 'z';
	p1.valor = 22;
	p0.clave = 'y';
	p0.valor = 993;
	
	arr[0]=p0;
	arr[1]=p1;
	
	char c;
	printf("Ingrese un caracter que quiera buscar : \n");
	scanf(" %c",&c);
	
	bool x=asoc_existe(arr,tam, c);
	if(x){
		printf("Existe el caracter pedido");
		
	}
	else{
		printf("No existe");
	}
	
	return 0;
	}
	

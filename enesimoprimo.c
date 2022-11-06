#include<stdio.h>
#include <stdbool.h>

bool esPrimo(int x){
	int i = 2;
	bool res = true;
	while(i<x && res){	
		res = res && (x%i != 0);
		i++;
	}
	return res;
}

int main(){
	int n, contPrimo , posicion;
	posicion = 1;
	contPrimo = 2;
	
	printf("Ingrese la posicion de primo que desea encontrar :\n");
	scanf("%d",&n);
	while(posicion!=n){
		
		contPrimo++;
	 
		if(esPrimo(contPrimo)){
			
			posicion++;
		}
			
		
	}

	printf("El primo en la posicion numero %d es = %d",n,contPrimo);
	
	return 0;
}
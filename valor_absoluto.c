#include<stdio.h>

int pedirEnt(){
printf("Ingrese un entero\n");
 int n; scanf("%d",&n);
return n;
}

int valorAbs(int x){ 
	int a=x;
	if(x>0){

	}
	else {
		x=(-x);
	} 
	printf("El valor absoluto de (%d) es %d\n",a,x);
	return x;
}


int main(){ 
	valorAbs(pedirEnt());
	
	return 0;
}

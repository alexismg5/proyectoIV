#include<stdio.h>
#include<assert.h>
int pedirEnt(){
	printf("Ingrese un entero\n");
	int n; scanf("%d",&n);
	return n;
}

struct div_t {
	int cociente;
	int resto;
};


struct div_t division(int x,int y) { 
	if (y==0){
		printf("No se puede dividir por 0");
	}
	assert(y!=0);
	int i=0;
	while(x>=y){
		x=x-y;
		i=i+1;
	}
	struct div_t resultado;
	resultado.cociente = (i);
	resultado.resto = (x);
	/*division(x,y).cociente = (x + y);
	division(x,y).resto = (x +y);*/
	printf("El cociente es: %d\n",resultado.cociente);
	printf("El resto es: %d\n", resultado.resto);
	return resultado;
};

int main(void){
	int x;
	int y;
	x = pedirEnt();
	y = pedirEnt();
	division(x,y);
	return 0;
}
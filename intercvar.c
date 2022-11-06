#include<stdio.h>

int pedirEnt(){
	printf("Ingrese un entero\n");
	int n; scanf("%d",&n);
	return n;
}

int main(){
	int x,y,z;
	x=pedirEnt();
	y=pedirEnt();
	z=x;
	printf("El primer valor ingresado vale %d y el segundo vale %d\n",x,y);
	x=y;
	y=z;
	printf("El primer valor ingresado ahora vale %d y el segundo ahora vale %d\n",x,y);

}
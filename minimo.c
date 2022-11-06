#include<stdio.h>
int pedirEnt(){
printf("Ingrese un entero\n");
 int n; scanf("%d",&n);
return n;
}

int minimo(int a,int b){
      int min;
      if(a<b){
      	min=a;
      	printf("El minimo es %d\n",min);

      }
      else{
      	min=b;
      	printf("El minimo es %d\n",min); 
      }
      return min;
}

int main(){
    minimo(pedirEnt(),pedirEnt());
    return 0;
}
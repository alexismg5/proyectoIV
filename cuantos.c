#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

struct comp_t {
int menores;
int iguales;
int mayores;
};

struct comp_t comp;

struct comp_t cuantos(int a[], int tam, int elem){
    int i = 0; 
    int iguales = 0;
    int menores = 0;
    int mayores = 0; 
    while (i<tam)
    {
        if(a[i] == elem){
             comp.iguales = comp.iguales + 1; 
            i ++; 
        }
        else if(a[i] > elem){
              comp.mayores = comp.mayores + 1;
             i ++;   
        }
        else if(a[i]< elem){
              comp.menores = comp.menores + 1;
             i ++;   
        }
    }
        return comp;
    
}

int main(void) {
   
	return 0;
}
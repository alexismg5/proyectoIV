#include <stdio.h>
#include <assert.h>
int suma_hasta(int N){
    if(N<0){
        printf("Error");
    }
    else{
        int x = N*(N+1)/2; 
        printf("%i",x); 
    }
}

int main(){

    int x;
    printf("Ingrese un entero:");
    scanf("%d", &x);
    suma_hasta(x);

    return 0;
}
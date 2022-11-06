#include <stdio.h>
#include <assert.h>
void holaHasta(int n){
    int x = 0 ;
    assert(x==0);
    while(x<=n){
        printf("Hola\n");
        x = x + 1;
    }
}

int main(){

    holaHasta(4);

    return 0;
}
#include <stdio.h>
#include <assert.h>



int sumatoria(int a[], int tam){
    int i = 0;
    int res = 0; 
    while(i<=tam){
        res = res + a[i];
        i = i + 1;
    }
    printf("%d",res);
}

int main(){
	
    return 0;
}
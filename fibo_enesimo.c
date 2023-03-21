#include <stdio.h>
#include <stdlib.h>
 

int fibonacci(int n);
 

int main(int argc, char** argv) {
    int n;
 
    
    printf("Digite a posicao: ");
    scanf("%d", &n);
 
    
    printf("O termo: %d\n", fibonacci(n));
 
    system("pause");
    return 0;
}
 

int fibonacci(int n) {
    int anterior = 0,
        proximo = 1,
        aux,
        i;
 
    
    if(n == 1) {
        return 0;
    
    } else if(n == 2) {
        return 1;
    
    } else {
        
        for(i = 3; i <= n; i++) {
            aux = proximo;
            proximo = anterior + proximo;
            anterior = aux;
        }
        return proximo;
    }
}
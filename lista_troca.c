
#include <stdio.h>
#include<stdlib.h>

struct Lista {
  int *valor;
  int n; 
};

int main() {
  
  struct Lista lista;
  lista.n = 5;
  int i, j, aux;

  lista.valor = (int*) malloc(lista.n * sizeof(int));

  lista.valor[0] = 8;
  lista.valor[1] = 4;
  lista.valor[2] = 11;
  lista.valor[3] = 0;
  lista.valor[4] = 7;

  for(i = 0; i<= lista.n-1; i++){
    for(j = i+1; j <= lista.n; j++){
        if(lista.valor[j] < lista.valor[i]){
            aux = lista.valor[i];
            lista.valor[i] = lista.valor[j];
            lista.valor[j] = aux;
        }
    }
    printf("%d; ", lista.valor[5]);
  }


}

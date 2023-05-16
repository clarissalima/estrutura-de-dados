#include <stdio.h>

void bolha (int n, int* v){
    int i, j;
    for(i=n-1; i>0; i--){
        int troca = 0;
        for(j=0; j<1; j++){
            if(v[j]>v[j+1]){
                int temp =  v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                troca = 1;
            }
        }
    if(troca == 0){
        return;
    }

    }
}

int main(void){
    int i;
    int v[8] = {25, 48, 37, 12, 57, 86, 33, 92};
    bolha(8, v);
    printf("Vetor ordenado: ");
    for(i=0; i<8; i++){
        printf("%d; ", v[i]);
    }
    printf("\n");
    return 0;
}
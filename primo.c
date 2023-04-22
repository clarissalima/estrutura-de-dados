#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void){
    int numero, i, resultado = 0;

    printf("digite um numero p/ ver se eh primo: ");
    scanf("%d", &numero);

    for(i = 2; i <= numero/2; i++){
        if(numero % i == 0){
            resultado++;
            break;
        }
    }

    if(resultado == 0){
        printf("1! %d o numero eh primo, parabens\n", numero);

    } else {
        printf("0! %d o numero nao eh primo\n", numero);
    }

    return 0;

}
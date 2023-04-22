// int
// float
// char

// struct coelho_t {
//     float tamanho;
//     char cor;
// };

// <tipoR> <nome> (<tipo> <nomeP>, <tipo> <nomeP>) {
//     return;
// }

// int main () {
//     coelho_t coelho_1;

//     coelho_1.cor =
//     coelho_1.tamanho = 
    
//     return 0;

//     nome(p, i);
// }


#include <stdio.h>

int soma(int num1, int num2){
    int resultado =  num1 + num2;
    return resultado;
}

int main(){
    int k = soma(8, 9);
    

    printf("O resultado eh: %d", k);


    return 0;
}
int main(){
    int **k;
    int *p[10];
    k = p; 
    int vetor[10][10];
    int aux, tam=10;
    
    for(int i=1; i<tam; i++){
        p[i] = (int *) malloc ( tam * sizeof(int) );
    }

    for(int i=0;i<tam;i++){   
        for(int j=0;j<tam;j++){

            aux = (i+1)*(j+1) ;
            k[i][j] = aux;
            vetor[i][j] = aux ;
            printf("\n\elemento %d - %d da tabuada alocada dinamicamente == %d\n",i,j,k[i][j]);

            printf("elemento %d - %d da tabuada sequencial == %d\n",(i+1),(j+1),vetor[i][j]);
        }
    }
}
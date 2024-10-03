#include<stdio.h>
#include<stdlib.h>

int main(){
    int quantidadeNumeros, *array;
    printf("\nDigite a quantidade de números que deseja armazenar: ");
    scanf("%d", &quantidadeNumeros);
    
    array = (int*) malloc(quantidadeNumeros * sizeof(int));

    for(int i=0; i<quantidadeNumeros; i++){
        printf("\nDigite o %d número: ", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\n\n");
    printf("---Números Digitados---");
    
    for(int i=0; i<quantidadeNumeros; i++){
        printf("\n%d", array[i]);
    }
    
    free(array);
    return 0;
}
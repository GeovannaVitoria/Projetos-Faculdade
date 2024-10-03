#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct lista{
    int dado;
    struct lista *link;
}no;

no *criaLista(int n){
    no *topo, *p;
    int valor;
    topo = NULL;
    
    for(int i=0;i<n;i++){
        printf("\nDigite o %d valor: ", i+1);
        scanf("%d", &valor);
        
        p = (no*) malloc(sizeof(no));
        p->dado = valor;
        p->link = topo;
        topo = p;
    }
    
    return topo;
}

void escreveLista(no *p){
    while( p != NULL){
        printf("%d\t", p->dado);
        p = p->link;
    }
    printf("\n");
}

int main(){
    no *primeira;
    int n;
    printf("\nCriando uma pilha");
    do{
        printf("\nEntre com o número de nós: ");
        scanf("%d", &n);
    } while(n<0);
    
    primeira = criaLista(n);
    
    if(primeira != NULL){
        printf("\nLista criada!");
        escreveLista(primeira);
    } else{
        printf("\nPilha vazia");
    }


    return 0;
}
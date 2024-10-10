#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct dupla{
    int dado;
    struct dupla *elink, *dlink;
}no;

no *crialde(int n){
    no *ini, *p;
    int valor;
    ini = NULL;
    for(int i=1;i<=n;i++){
        printf("Digite o %d valor da lista: ", i);
        scanf("%d", &valor);
        p=(no*)malloc(sizeof(no));
        p->dado=valor;
        p->elink=NULL;
        
        if(ini!=NULL)
            ini->elink=p;
            
        p->dlink=ini;
        ini=p;
    }

    return ini;
}

void escreveLista(no *p){
    while(p!=NULL){
        printf("%d\t", p->dado);
        p=p->dlink;
    }
}

int main(){
    no *primeira;
    int n;
    printf("\nCriando uma lista encadeada");
    do{
        printf("\nEntre com o número de nós: ");
        scanf("%d", &n);
    }while(n<0);
    
    primeira = crialde(n);
    
    if(primeira!=NULL){
        printf("\nLista criada!");
        printf("\n");
        escreveLista(primeira);
    } else{
        printf("\nLista vazia!");
    }
    
    return 0;
}
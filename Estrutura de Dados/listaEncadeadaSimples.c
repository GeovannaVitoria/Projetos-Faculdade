#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// Criando scruct com duas variáveis (dado e link).
// Onde o link é um ponteiro do tipo 'struct lista' pois faz referência ao 
// próximo nó da lista
typedef struct lista{
    int dado;
    struct lista *link;
} no;

// A função para criar a lista será do tipo struct(pois manipula o dado e o link)
// ini => armazena o primeiro nó; p => representa o nó atual
// ult => armazena o último nó e conecta o próximo nó

no *criaLista(int n){
    no *ini, *p, *ult;
    ini = ult = NULL; // Iniciam com nulo pois indicam que a lista está vazia
    int valor;
    
    for(int i=0; i<n; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &valor);
        // 'p' cria um novo espaço de memória dinâmica para o próximo nó e aponta pra ele
        p=(no*) malloc(sizeof(no));
        p->dado = valor;
        p->link = NULL;
        
        if( ult != NULL)
            ult->link=p; // o ponteiro 'link' aponta para o próximo nó
        else
            ini=p; // 'ini' aponta para o primeiro nó
        
        ult = p; // 'ult' vale o mesmo que 'p', pois aponta para o nó da vez
    }
    
    return ini; // A função retorna o ponteiro para o primerio nó
}

void escreveLista(no *p){
    while(p != NULL){
        printf("%d\t", p->dado);
        p = p->link;
    }
}

int main(){
    no *primeira; // Declarando o nome da struct (que é um ponteiro pois aponta para um ponteiro)
    int n;
    printf("---Lista encadeada---");
    
    
    // Do...while para tratar erros
    do{
        printf("\nDigite a quantidade de vezes que deseja armazenar valores: ");
        scanf("%d", &n);
    } while(n<0);
    
    primeira = criaLista(n); // Recebe o ponteiro para o primeiro nó da lista criada pela função 'criaLista'.
    
    if (primeira != NULL){ // Verifica se a lista está vazia para imprimir
        printf("Lista criada!"); 
        printf("\n");
        escreveLista(primeira); // Utilizando a função 'escreveLista'
    } else{
        printf("Lista vazia");
    }
    return 0;
}
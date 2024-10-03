#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[50];
    int idade;
    float salario;
} dadosFuncionario;

int main(){
    int n;
    float mediaSalarial, somaSalarial;
    somaSalarial = 0;
    
    printf("Quantos funcionários existem na sua empresa?: ");
    scanf("%d", &n);
    
    dadosFuncionario vet[n];
    
    for(int i=0; i<n; i++){
        printf("\nDigite o nome do %d funcionário: ", i+1);
        getchar();
        fgets(vet[i].nome, sizeof(vet[i].nome), stdin);

        printf("\nDigite a idade do %d funcionário: ", i+1);
        scanf("%d", &vet[i].idade);
        
        printf("\nDigite o salário do %d funcionário: ", i+1);
        scanf("%f", &vet[i].salario);
    }
    
    printf("\n-----Informações funcionários-----");
    
    for(int i=0; i<n; i++){
        printf("\n---Informações do %d funcionário---", i + 1);
        printf("\nNome: %s ", vet[i].nome);
        printf("\nIdade: %d", vet[i].idade);
        printf("\nSalário: %.2f", vet[i].salario);
        printf("\n");
    }

    for(int i=0; i<n; i++){
        somaSalarial += vet[i].salario;
    }
    
    mediaSalarial = somaSalarial/n;
    
    printf("A média salarial da equipe é: %.2f", mediaSalarial);

    return 0;
}
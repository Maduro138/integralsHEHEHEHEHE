#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "integral.h"

int main(){

    FILE* f = fopen("arquivo1.txt","w");
    if (f ==NULL){
        printf("\nAlocação falhou");
    }
    else {
        fprintf(f, "Deu bom :)");
        fclose(f);
    }
    integrals *integrais;
    
    int escolha = 0;
    int continuar = true;
    while (continuar)
    {
        printf("\nBem vindo ao calculador de integrais  :) ");
        printf("\nO que deseja fazer hoje:\n");
        printf("\n1- Calcular integrais?");
        printf("\n2- Salvar integrais?");
        printf("\n3- Sair?\n\n");
        /*FAZER COM QUE A PESSOA ESCREVA A OPCAO DELA EM FRASE (STRINGS)*/
        /*POR ENQUANTO, VOU USAR SÓ NÚMEROS NO switch*/
        int indefOUdef = 0;

        scanf("%d",&escolha);
        switch (escolha)
        {
        case 1:
            
            printf("\nQue legal! A sua integral sera definida ou indefinida ?\n(1 para integral definida)\n(2 para integral indefinida)\n");
            scanf("%d",&indefOUdef);
            if (indefOUdef==1)
            {
                int A = 0;
                int B = 0;
                printf("\nQuais serao os pontos B e A para calcularmos a funcao?\n( Maior e depois o menor valor )");
                printf("\nDigite o maior:  ");
                scanf("%d",&A);
                printf("\nDigite o menor:  ");
                scanf("%d",&B);
                CalcularInteDEF(A,B);
                
            }
            else if (indefOUdef==2)
            {
                int a =1;
                int b=1;
                CalcularInteINDEF(a,b);
            }
            
            break;
        case 2:
            
        break;
            case 3:
            printf("\n\n\n Saindo do programa :(\n\n");
            continuar = false;
            break;
        default:
        printf("\nPor favor digite apenas umas das opcoes diponiveis no momento");
            break;
        }
        
    }
    



  return 0;   
}
int SalvarIntegrais(integrals *integrais,int quantidade){

    printf("\nVamos salvar algumas integrais\n\n");

    FILE* arquivo = fopen("arquivo2.txt","w");
        if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo texto para salvar!\n");

    } else {
        for (int i = 0; i < quantidade; i++) {
            fprintf(arquivo,"%d- Integral\n",quantidade);
            fprintf(arquivo,"Máximo da integral %d\n",integrais[i].max);
            fprintf(arquivo,"Mínimo da integral %d\n",integrais[i].min);
            fprintf(arquivo,"X elevado a: %d\n",integrais[i].regradeX);

        }
        fclose(arquivo);
        printf("Dados salvos em arquivo2.txt.\n");
    }

    FILE *FF = fopen("arquivobinario.dat","wb");
    if (FF == NULL) {
        printf("Erro ao abrir o arquivo binario para salvar!\n");
        return 0; 
    }
    
    // Salva a quantidade e depois o array de structs
    fwrite(&quantidade, sizeof(int), 1, FF);
    fwrite(integrais, sizeof(integrals), quantidade, FF);
    fclose(FF);
    
    printf("Dados salvos em arquivobinario.dat com sucesso.\n");
    return 1;
}



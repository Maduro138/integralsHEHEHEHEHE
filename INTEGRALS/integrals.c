#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "integral.h"

int main(){

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
                /*Chamar a outra função*/
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
#ifndef integral_h
#define integral_h

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

typedef struct 
{
    int max;
    int min;
    int regradeX;

} integrals;



void CalcularInteINDEF(int pontoMax, int pontoMin );
void CalcularInteDEF(int pontoMax, int pontoMin );



void CalcularInteDEF(int pontoMax , int pontoMin ){
    printf("Bem vindo ao (real) calculador de integrais DEFINIDAS\n\n");
    printf("\n        ____");
    printf("\n       /");
    printf("\n      |");
    printf("\n      |");
    printf("\n      |");
    printf("\n      |");
    printf("\n____ /\n\n");

    int EXpoente = 0;
    printf("\nQual sera a regra da funcao?   ");
    printf("X elevado a quanto? Diga-me:  ");
    scanf("%d",&EXpoente);
    int NuaserUSADO = EXpoente+1;
    double resultado_parcial = (pow(pontoMax,NuaserUSADO)/NuaserUSADO) - (pow(pontoMin,NuaserUSADO))/(NuaserUSADO);

    printf("\nO resultado de ");
    
    printf("\n        ____ %d",pontoMax);
    printf("\n       /");
    printf("\n      |");
    printf("\n      |");
    printf("\n      |");
    printf("\n      |");
    printf("\n____ /  %d",pontoMin);
    printf("\n\nE igual a: %.3lf ",resultado_parcial);
    printf("\n\nVoltando ao início \n\n");

}

void CalcularInteINDEF(int pontoMax , int pontoMin ){

    printf("Bem vindo ao calculador de integrais INDEFINIDAS\n\n");
    printf("\n        ____");
    printf("\n       /");
    printf("\n      |");
    printf("\n      |");
    printf("\n      |");
    printf("\n      |");
    printf("\n____ /\n\n");
    printf("\nAqui apenas te damos a regra da funcao");
    printf("\nO x deve ser elevado a qual número ? (Regra da função)");
    int ExpoenteX=0;
    scanf("%d",&ExpoenteX);
    int NuaserUSADO = ExpoenteX+1;
    if (NuaserUSADO == -1)
    {
        printf("\nAqui a regra da funcao sera:  ln|X| + C");
    }
    else {
    printf("\n        ____ %d");
    printf("\n       /");
    printf("\n      |");
    printf("\n      |            =  Regra de x^%d sera: (X1^%d)/%d",ExpoenteX,NuaserUSADO,NuaserUSADO);
    printf("\n      |");
    printf("\n      |");
    printf("\n____ /  %d");

    }
    
    printf("\n\nVoltando ao início \n\n");
}

#endif

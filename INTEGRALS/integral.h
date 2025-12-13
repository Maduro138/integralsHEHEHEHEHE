#ifndef integral_h
#define integral_h

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void CalcularInteINDEF(int pontoMax, int pontoMin );
void CalcularInteDEF(int pontoMax, int pontoMin );



void CalcularInteDEF(int pontoMax , int pontoMin ){
    printf("Bem vindo ao (real) calculador de integrais\n\n");
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
    double resultado_parcial = ((pontoMax^NuaserUSADO)/NuaserUSADO) - (pontoMin^(NuaserUSADO))/(NuaserUSADO);

    printf("\nO resultado de ");
    
    printf("\n        ____ %d",pontoMax);
    printf("\n       /");
    printf("\n      |");
    printf("\n      |");
    printf("\n      |");
    printf("\n      |");
    printf("\n____ /  %d",pontoMin);
    printf("\n\nE igual a: %3.lf ",resultado_parcial);
    printf("\n\nVoltando\n\n");

}

void CalcularInteINDEF(int pontoMax , int pontoMin ){








    int result;

}

#endif

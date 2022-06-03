#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "binario.h"
#include "VALOR_GLOBAL 2"

using namespace std;

void binario::decimaBinario(int val, char cad[]){
    if(val>=1){
        decimaBinario(val/VALOR_GLOBAL,cad);
        strcpy(cad,itoa((val%VALOR_GLOBAL),cad,100));
    }
        strcat(cad,"\0");
        fflush(stdin);
        printf("%s",cad);
}
void binario::imprimir(int val , char cad[100]){
    printf("\n");
}





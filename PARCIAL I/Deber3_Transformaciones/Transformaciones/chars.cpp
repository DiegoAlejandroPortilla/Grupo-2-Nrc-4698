#pragma once

#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include "chars.h"

using namespace std;

char chars::*ingresoDatos(char *cadena){
    char *dato = new char[10], c;
    int i = 0;
    printf("%s", cadena);
    while((c = getch()) != 13){
        if(c == 8){
            if(i > 0){
                i--;
                printf("\b \b");
            }
        }
        else{
            dato[i] = c;
            i++;
            printf("%c", c);
        }
    }
    dato[i] = '\0';
    return dato;
}
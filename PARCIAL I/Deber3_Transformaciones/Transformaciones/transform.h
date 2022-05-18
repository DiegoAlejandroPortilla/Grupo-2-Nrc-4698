#pragma once

#include <iostream>
#include <string>

class transform{
    public:
        int entero(std::string);
        float flotante(std::string);
        bool esEntero(std::string);
        bool esFlotante(std::string);
        bool esNumeros(std::string);
};
#pragma once
/*
* @flie celular.h
* @author Diego Portilla - Darwin Valdiviezo - Estructura de Datos
* @date 9/6/2022
* @brief Archivo de cabecera para la clase celular
* @version 1.0
* 
*@copyright Copyright (c) 2022,Diego Portilla - Darwin Valdiviezo
*@license MIT License
*/

#include <string>

using namespace std;

class celular{
    private:
        string marca;
        string modelo;
        string color;
        string nSerie;
    public :
        /**
         * @brief Constructor de la clase celular
         * 
         */
        celular();
        /**
         * @brief Constructor de la clase celular
         * 
         * @param marca
         * @param modelo
         * @param color
         * @param nSerie
         */
        celular(string nSerie, string marca, string modelo, string color);
        /**
         * @brief Get the Marca object  
         * 
         * @return string 
         */
        string getMarca();
        /**
         * @brief Get the Modelo object  
         * 
         * @return string 
         */
        string getModelo();
        /**
         * @brief Get the Color object  
         * 
         * @return string 
         */
        string getColor();
        /**
         * @brief Get the NSerie object  
         * 
         * @return string 
         */
        string getnSerie();
        /**
         * @brief Set the Marca object  
         * 
         * @param marca 
         */
        void setMarca(string marca);
        /**
         * @brief Set the Modelo object  
         * 
         * @param modelo 
         */
        void setModelo(string modelo);
        /**
         * @brief Set the nSerie object  
         * 
         * @param nSerie  
         */
        void setnSerie(string nSerie);
        /**
         * @brief Set the Color object  
         * 
         * @param color 
         */
        void setColor(string color);
};

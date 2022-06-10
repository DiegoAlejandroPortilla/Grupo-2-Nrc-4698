#pragma once
/*
* @flie Cliente.h
* @author Diego Portilla - Darwin Valdiviezo - Estructura de Datos
* @date 9/6/2022
* @brief Archivo de cabecera para la clase cliente
* @version 1.0
* 
*@copyright Copyright (c) 2022,Diego Portilla - Darwin Valdiviezo
*@license MIT License
*/
#include <string>

using namespace std;

class cliente{
    private:
        string nCedula;
        string nombre;
        string apellido;
        string nTelefono;
        string marca;
        string modelo;
        string color;
        string nSerie;
        
    public :
        /**
         * @brief Constructor de la clase cliente
         * 
         */
        cliente();
        /**
         * @brief Constructor de la clase cliente
         * 
         * @param nCedula
         * @param nombre
         * @param apellido
         * @param nTelefono
         * @param marca
         * @param modelo
         * @param color
         * @param nSerie
         */
        cliente(string nCedula,string nombre, string apellido, string nTelefono, string marca, string modelo,string nSerie, string color);
        /**
         * @brief Get the Nombre object  
         * 
         * @return string 
         */
        string getNombre();
        /**
         * @brief Get the Apellido object  
         * 
         * @return string 
         */
        string getApellido();
        /**
         * @brief Get the nCedula object  
         * 
         * @return string 
         */
        string getnCedula();
        /**
         * @brief Get the nTelefono object  
         * 
         * @return string 
         */
        string getnTelefono();
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
         * @brief Set the Nombre object  
         * 
         * @param nombre 
         */
        void setNombre(string nombre);
        /**
         * @brief Set the Apellido object  
         * 
         * @param apellido 
         */
        void setApellido(string apellido);
        /**
         * @brief Set the nCedula object  
         * 
         * @param nCedula 
         */
        void setnCedula(string nCedula);
        /**
         * @brief Set the nTelefono object  
         * 
         * @param nTelefono 
         */
        void setnTelefono(string nTelefono);
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



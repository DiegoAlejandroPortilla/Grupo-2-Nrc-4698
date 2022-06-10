#pragma once
/*
* @flie String_p.h
* @author Diego Portilla - Darwin Valdiviezo - Estructura de Datos
* @date 9/6/2022
* @brief Archivo de cabecera para la clase String_p
* @version 1.0
* 
*@copyright Copyright (c) 2022,Diego Portilla - Darwin Valdiviezo
*@license MIT License
*/
#include <string>
using namespace std;
class String_p
{
public:
	/**
	 * @brief Trasforma el texto a minusculas
	 *
	 * @return char
	 */
	char to_lower(char);
	/**
	 * @brief Trasforma el texto a mayusculas
	 *
	 * @return char
	 */
	char to_upper(char);
	/**
	 * @brief Trasforma el texto a minusculas
	 *
	 * @return string
	 */
	string capitalize(string);
	/**
	 * @brief Trasforma el texto a mayusculas
	 *
	 * @return string
	 */
	string minusculize(string);
	/**
	 * @brief busca la posicion de una letra en un string
	 *
	 * @return int
	 */
	int find_character(string, char, int);
	/**
	 * @brief busca la posicion de una letra en un string
	 *
	 * @return int
	 */
	int find(string, string, int);
	/**
	 * @brief Cuenta el tama�o del string
	 *
	 * @return int
	 */
	int length(string);
	/**
	 * @brief Copia una parte de la cadena
	 *
	 * @return string
	 */
	string substract(string, int, int);
	/**
	 * @brief Compara una cadena con otra cadena
	 *
	 * @return string
	 */
	bool is_equal(string, string);
	/**
	 * @brief Trasforma de char a entero
	 *
	 * @return int
	 */
	int atoi(char);
	/**
	 * @brief Trasforma de char a entero
	 *
	 * @return int
	 */
	int stoi(string);
	/**
	 * @brief Trasforma de char a entero
	 *
	 * @return long
	 */
	long stol(string);
	/**
	 * @brief Traspone las posciones del string
	 *
	 * @return string
	 */
	string reverse(string);
	/**
	 * @brief Traspone el string
	 *
	 * @return char
	 */
	char at(int, string);

	/**
	 * @brief
	 *
	 * @return char*
	 */
	char* strcpy(char*, const char*);

	/**
	 * @brief
	 *
	 * @return char*
	 */
	char* strcat(char*, const char*);

	/**
	 * @brief
	 *
	 * @return char*
	 */
	char* strncpy(char*, const char*, size_t);
};

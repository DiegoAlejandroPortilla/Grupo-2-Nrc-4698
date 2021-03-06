/*
	*Universidad de las Fuerzas Armadas "ESPE"
    *Enunciado del problema:
	    *Programa que realize hash cerrado de enteros y strings .
     *Autores:
        *Curso de Estructura de Datos NRC: 4698
	*Fecha de creacion: 
        * 24-06-2022
	*Fecha de modificacion:
        * 29-06-2022
    *GitHub del grupo:	
        *https://github.com/DavidGLeal/4698_Ordenamientos
*/
#pragma once
#include <conio.h>
#include <string>
#include "conversion.h"
#include <iostream>
using namespace std;


    /* Creando una clase llamada IngresoDatos. */
    class IngresoDatos{
        private:

            char* dato; //Arreglo donde guardare la insercion de mis numeros
            Conversion conversion; //Instancia de conversion para determinar y transformar enteros y flotantes
            void imprimirMensaje(string str){
                cout<< str <<endl;
            }

            //metodo pincipal

           /**
            * Lee una cadena del teclado y la devuelve.
            * 
            * Parameters
            * ----------
            * mensaje : string
            * 	El mensaje que se mostrarĂ¡ al usuario.
            * 
            * Returns
            * -------
            * 	Un puntero al primer elemento de la matriz.
            */
            char* leerSoloLong(string mensaje){

                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' ){
                        printf("%c", c);
                        dato[i] = c;
                        i++;

                    }else if(c == 8){ //Si el input es un back space

                        backspaceEnteros(&i, &j,  &c, mensaje); //Funcion para la tecla backspace
                    }       			     
                }

                dato[i]='\0';

                /*
                for(int o = 0; o < 10; o++)
                    cout<<dato[o];
                */

                return dato;
            }

           /**
            * Es una funciĂ³n que lee una cadena de nĂºmeros y la devuelve.
            * </cĂ³digo>
            * 
            * Returns
            * -------
            * 	Un puntero al primer elemento de la matriz.
            */
            char* leerSoloLong(){
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' ){
                        printf("%c", c);
                        dato[i] = c;
                        ++i;

                    }else if(c == 8){ //Si el input es un back space
                        backspaceEnteros(&i, &j,  &c); //Funcion para la tecla backspace

                    }   			     
                }

                dato[i]='\0';
                return dato;
            }

            /**
             * Es una funciĂ³n que solo lee nĂºmeros enteros, y si el usuario presiona la tecla de
             * retroceso, borra el Ăºltimo carĂ¡cter ingresado.
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	es el mensaje que se mostrarĂ¡ al usuario.
             * 
             * Returns
             * -------
             * 	Un puntero al primer elemento de la matriz.
             */
            char* leerSoloEnteros(string mensaje){
                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' || c == 45){
                        printf("%c", c);
                        dato[i] = c;
                        i++;

                    }else if(c == 8){ //Si el input es un back space

                        backspaceEnteros(&i, &j,  &c, mensaje); //Funcion para la tecla backspace
                    }       			     
                }

                dato[i]='\0';
                return dato;
            }

           /**
            * Es una funciĂ³n que solo lee nĂºmeros enteros del teclado y los devuelve como una cadena.
            * 
            * Returns
            * -------
            * 	un puntero al primer elemento de la matriz.
            */
            char* leerSoloEnteros(){
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' ){
                        printf("%c", c);
                        dato[i] = c;
                        ++i;

                    }else if(c == 8){ //Si el input es un back space
                        backspaceEnteros(&i, &j,  &c); //Funcion para la tecla backspace

                    }   			     
                }

                dato[i]='\0';
                return dato;
            }
            
            /**
             * Es una funciĂ³n que borra el Ăºltimo carĂ¡cter de una cadena.
             * 
             * Parameters
             * ----------
             * i : int
             * 	es la posiciĂ³n del cursor
             * j : int
             * 	es la posiciĂ³n del cursor
             * c : char
             * 	El carĂ¡cter que el usuario ha ingresado.
             * mensaje : string
             * 	El mensaje a mostrar
             */
            void backspaceEnteros(int* i, int* j, char* c, string mensaje){
                if(*c >= '0' && *c <= '9'){
                        if(*i != 0) --*i;
                    }else{
                        system("CLS"); //Limpio pantalla
                        imprimirMensaje(mensaje);
                        for(int p = 0; p < *i-1; p++){
                            printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                        }

                        if(*i != 0){ //Verifico que hay valores
                            dato[--*i]='\0'; //Borro valor
                        }
                    }
            }

            /**
             * Es una funciĂ³n que borra el Ăºltimo carĂ¡cter de una cadena.
             * 
             * Parameters
             * ----------
             * i : int
             * 	es la posiciĂ³n de la matriz
             * j : int
             * 	es la posiciĂ³n del cursor
             * c : char
             * 	El personaje que fue presionado
             */
            void backspaceEnteros(int* i, int* j, char* c){

                if(*c >= '0' && *c <= '9'){
                        if(*i != 0) --*i;
                }else{ 
                    system("CLS"); //Limpio pantalla
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){ //Verifico que hay valores
                        dato[--*i]='\0'; //Borro valor
                    }
                }     
            }

            /**
             * Es una funciĂ³n que lee datos del teclado y devuelve un puntero a una matriz de
             * caracteres.
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	es el mensaje que se mostrarĂ¡ al usuario.
             * 
             * Returns
             * -------
             * 	Un puntero al primer elemento de la matriz.
             */
            char* leerDatos(string mensaje){

                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if((c >= '0' && c <= '9') || c == 46 ){
                        
                        conversion.verificar(c); //Verifico por puntos ingresados
                    
                        unicoPunto( &j , &i, mensaje, &c); //Funcion de unico punto

                        i++;

                    }else if(c == 8){ //Si el input es un back space

                        backspace(&i, &j,  &c, mensaje); //Funcion para la tecla backspace
             
                    }       			     
                }

                dato[i]='\0';
                return dato;
            }

           /**
            * Lee la entrada del teclado y la almacena en una matriz de caracteres
            * 
            * Returns
            * -------
            * 	Un puntero al primer elemento de la matriz.
            */
            char* leerDatos(){
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' || c == 46){
                        conversion.verificar(c); //Verifico por puntos ingresados
                    
                        unicoPunto( &j , &i, "Ingrese de nuevo ", &c); //Funcion de unico punto

                        ++i;

                    }else if(c == 8){ //Si el input es un back space
                        backspace(&i, &j,  &c); //Funcion para la tecla backspace
                    }   			     
                }

                dato[i]='\0';
                return dato;
            }

            /**
             * Lee una cadena del teclado y la devuelve.
             * 
             * Returns
             * -------
             * 	un puntero al primer elemento de la matriz.
             */
            char* leerLetras(){
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
                        printf("%c", c); //Imprimo el valor
                        dato[i] = c;
                        i++;
                    }else if(c == 8){ //Si el input es un back space
                        backspace(&i, &c); //Funcion para la tecla backspace

                    }else if(c == ' '){
                        printf(" ");
                        dato[i] = c;
                        i++;
                    }    			     
                }

                dato[i]='\0';
                return dato;
            }

            /**
             * Recibe una cadena y devuelve una matriz de caracteres.
             * El problema es que cuando trato de usar la funciĂ³n, devuelve un valor nulo.
             * IntentĂ© depurarlo y descubrĂ­ que el problema estĂ¡ en el ciclo while.
             * He intentado cambiar la condiciĂ³n while, pero no funciona.
             * TambiĂ©n he intentado cambiar la condiciĂ³n a un simple "verdadero", pero tampoco
             * funciona.
             * He intentado cambiar la condiciĂ³n a "c != 13", 
             * He intentado cambiar la condiciĂ³n a "c != '\0'" 
             * He intentado cambiar la condiciĂ³n a "c != '\n'" 
             * He intentado cambiar la condiciĂ³n a "c != '\r'" 
             * IntentĂ© cambiar la condiciĂ³n a "c != '\r\n'
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	El mensaje que se mostrarĂ¡ al usuario.
             * 
             * Returns
             * -------
             * 	Un puntero al primer elemento de la matriz.
             */
            char* leerLetras(string mensaje){

                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
                        printf("%c", c); //Imprimo el valor
                        dato[i] = c;
                        i++;
                    }else if(c == 8){ //Si el input es un back space
                        backspace(&i, &c, mensaje); //Funcion para la tecla backspace
                    }else if(c == ' '){
                        printf(" ");
                        dato[i] = c;
                        i++;
                    }       			     
                }

                dato[i]='\0';
                return dato;
            }

            /**
             * Lee una cadena del teclado y la devuelve.
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	es el mensaje que se mostrarĂ¡ en la pantalla
             * 
             * Returns
             * -------
             * 	Un puntero al primer elemento de la matriz.
             */
            char* leerMixto(string mensaje){
                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == 92 || c == 58){
                        printf("%c", c); //Imprimo el valor
                        dato[i] = c;
                        i++;
                    }else if(c == 8){ //Si el input es un back space
                        backspace(&i, &c, mensaje); //Funcion para la tecla backspace
                    }else if(c == ' '){
                        printf(" ");
                        dato[i] = c;
                        i++;
                    }else if((c >= '0' && c <= '9') || c == 46 ){
                        
                        conversion.verificar(c); //Verifico por puntos ingresados
                    
                        unicoPunto( &j , &i, mensaje, &c); //Funcion de unico punto
                        i++;
                    }       			     
                }

                dato[i]='\0';
                return dato;
            }


            /**
             * Borra el Ăºltimo carĂ¡cter de la cadena.
             * 
             * Parameters
             * ----------
             * i : int
             * 	es la posiciĂ³n de la matriz
             * j : int
             * 	es el numero de decimales
             * c : char
             * 	es el carĂ¡cter que ingresa el usuario
             * mensaje : string
             * 	El mensaje a mostrar
             */
            void backspace(int* i, int* j, char* c, string mensaje){

                if(*c >= '0' && *c <= '9'){
                if(*i != 0) --*i;
                }else{
                    system("CLS"); //Limpio pantalla
                    imprimirMensaje(mensaje);
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){
                        if(dato[*i-1] == 46){ //Verifico si hubo un punto, para reiniciarlo en la cuenta
                            conversion.setVerificador(0);
                            *j = 0;
                        } //Verifico que hay valores
                        dato[--*i]='\0'; //Borro valor
                    }
                }
            }

           /**
            * Borra la pantalla, imprime la cadena hasta el Ăºltimo carĂ¡cter, verifica si el Ăºltimo
            * carĂ¡cter era un punto y, de ser asĂ­, restablece el contador de puntos y la bandera de
            * puntos, y luego elimina el Ăºltimo carĂ¡cter.
            * 
            * Parameters
            * ----------
            * i : int
            * 	es la posiciĂ³n de la matriz
            * j : int
            * 	es el contador de los lugares decimales
            * c : char
            * 	es el carĂ¡cter que ingresa el usuario
            */
            void backspace(int* i, int* j, char* c){

                    system("CLS"); //Limpio pantalla
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){ 
                        if(dato[*i-1] == 46){ //Verifico si hubo un punto, para reiniciarlo en la cuenta
                            conversion.setVerificador(0);
                            *j = 0;
                        }//Verifico que hay valores
                        dato[--*i]='\0'; //Borro valor
                    }
                
            }

           /**
            * Limpia la pantalla, imprime el mensaje, imprime la cadena hasta el Ăºltimo carĂ¡cter y
            * luego elimina el Ăºltimo carĂ¡cter
            * 
            * Parameters
            * ----------
            * i : int
            * 	puntero a la posiciĂ³n de la matriz
            * c : char
            * 	El carĂ¡cter que el usuario estĂ¡ escribiendo.
            * mensaje : string
            * 	El mensaje a mostrar.
            */
            void backspace(int* i, char* c, string mensaje){

                    system("CLS"); //Limpio pantalla
                    imprimirMensaje(mensaje);
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){ 
                        dato[--*i]='\0'; //Borro valor
                    }
                
            }
          
           /**
            * Elimina el Ăºltimo carĂ¡cter de la cadena, si es una letra, elimina el Ăºltimo carĂ¡cter de
            * la cadena, si es un nĂºmero, elimina el Ăºltimo nĂºmero de la cadena
            * 
            * Parameters
            * ----------
            * i : int
            * 	es el iterador de la matriz
            * c : char
            * 	El caracter que el usuario ha ingresado
            */
            void backspace(int* i, char* c){

                if(*c >= 'a' && *c <= 'z' || *c >= 'A' && *c <= 'Z'){
                if(*i != 0) --*i;
                }else{ 
                    system("CLS"); //Limpio pantalla
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){ 
                        dato[--*i]='\0'; //Borro valor
                        --*i; //Disminuto iterador
                    }
                }
            }

            /**
             * Comprueba si el usuario ha ingresado un punto, y si es asĂ­, verifica si es el primer
             * punto ingresado, si lo es, lo imprime, si no, imprime un mensaje de error.
             * No sĂ© si me estoy explicando bien, pero espero que se entienda.
             * 
             * Parameters
             * ----------
             * j : int
             * 	es un puntero a un nĂºmero entero que se usa para contar la cantidad de puntos que el
             * usuario ha ingresado.
             * i : int
             * 	es el contador de la matriz
             * mensaje : string
             * 	El mensaje a mostrar
             * c : char
             * 	El caracter que el usuario ha ingresado
             */
            void unicoPunto(int* j, int* i, string mensaje, char* c){
                if(conversion.getNumero()){ //Si el numero es flotante
                conversion.setVerificador(1); //Seteo, pues si tiene un punto, es flotante
                    if(*j==0){
                        printf("%c", *c); //Imprimo el valor
                        dato[*i] = *c;
                        ++*j; //Hago que J deje de ser 0, pues no puede haber mas de un solo punto
                    }else{ //!El usuario ingreso mas de un punto
                
                        system("CLS");
                        imprimirMensaje("Ha ingresado mas de un punto. Vuelva a intentarlo");
                        imprimirMensaje(mensaje);
                        for(int p = 0; p < *i; p++){
                            printf("%c", dato[p]);
                        }
                        --*i; //Para no avanzar en el contador e imprimir basura
                    }
                    }else{ //Si el dato no es un punto
                        printf("%c", *c);
                        dato[*i] = *c;
                    }
            }

            public:

           /**
            * *|Constructor|*
            */
            IngresoDatos(){
                this -> dato = new char[100]; //Creo un array para almacenar mis datos  
            }    

            /**
             * El destructor se llama cuando el objeto es destruido.
             */
            ~IngresoDatos(){
                delete [] dato; //Lo libero
            }   
            /**
             * La funciĂ³n funcionPrincipal es la funciĂ³n principal del programa, recibe como parĂ¡metro una cadena y
             * llama a la funciĂ³n funcionPrincipalFlotantes, la cual devuelve un nĂºmero de tipo N, que es una clase
             * template
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	es una cadena que se utiliza para pedir al usuario un nĂºmero.
             */

            void funcionPrincipal(string mensaje){
                float real = funcionPrincipalFlotantes(mensaje);
                if(this -> conversion.getVerificador() == 1){
                    cout << "\nSu numero es "<< real << " y es un flotante" <<endl; //Imprimo flotante
                }else{
                    int entero = real;
                    cout << "\nSu numero es "<< real << " y es un entero" <<endl; //Imprimo entero
                }
            }    

            /**
             * Esta funciĂ³n es la funciĂ³n principal del programa, llama a la funciĂ³n que convierte el
             * nĂºmero en flotante y luego verifica si el nĂºmero es un nĂºmero entero o un flotante
             */
            void funcionPrincipal(){

                float real = funcionPrincipalFlotantes();

                if(this -> conversion.getVerificador() == 1){
                    cout << "\nSu numero es "<< real << " y es un flotante" <<endl; //Imprimo flotante
                }else{
                    int entero = real;
                    cout << "\nSu numero es "<< real<< " y es un entero" <<endl; //Imprimo entero
                }
            }   
            
            /**
             * Toma una cadena como parĂ¡metro y devuelve un flotante
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	es el mensaje que se mostrarĂ¡ al usuario.
             * 
             * Returns
             * -------
             * 	un flotador
             */
            float funcionPrincipalFlotantes(string mensaje){

                char *aux = leerDatos(mensaje);
                if(aux[0] != '\0' && aux[0] != 46){
                    return this -> conversion.numFloat(aux);
                }else if(aux[0] == 46){
                    cout<<"\n~~ Un flotante no inicia con un punto solo ~~\n"<<endl;
                    return -1;
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }

            }

            /**
             * Lee una cadena del teclado, verifica si estĂ¡ vacĂ­a o si comienza con un punto, y si no
             * es asĂ­, la convierte en un flotante
             * 
             * Returns
             * -------
             * 	un flotador
             */
            float funcionPrincipalFlotantes(){

                char *aux = leerDatos();
                if(aux[0] != '\0' && aux[0] != 46){
                    return this -> conversion.numFloat(aux);
                }else if(aux[0] == 46){
                    cout<<"\n~~ Un flotante no inicia con un punto solo ~~\n"<<endl;
                    return -1;
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }
              
            } 

           /**
            * Lee una cadena del teclado, la convierte en un int largo y lo devuelve
            * 
            * Returns
            * -------
            * 	un largo largo sin firmar.
            */
            unsigned long long funcionPrincipalLong(){

                char *aux = leerSoloLong();
                if(aux[0] != '\0'){
                    return this -> conversion.numLong(aux);
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }
            }

            /**
             * Lee una cadena del usuario, la convierte en una matriz de caracteres y luego convierte
             * la matriz de caracteres en un int largo largo
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	es el mensaje que se mostrarĂ¡ al usuario.
             * 
             * Returns
             * -------
             * 	un largo largo int.
             */
            unsigned long long funcionPrincipalLong(string mensaje){

                char *aux = leerSoloLong(mensaje);

                /*
                for(int i = 0; i < 10; i++){
                    cout<< aux[i] << " "<<endl;
                }
                */

                if(aux[0] != '\0'){
                    //cout<< conversion.numLong(aux) <<endl;
                    return this -> conversion.numLong(aux);
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }
            }

            /**
             * Lee una cadena del teclado, la convierte en un nĂºmero entero y la devuelve
             * 
             * Returns
             * -------
             * 	un entero
             */
            int funcionPrincipalEnteros(){

                char *aux = leerSoloEnteros();
                if(aux[0] != '\0'){
                    return this -> conversion.numInt(aux);
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }
            }

            /**
             * Lee una cadena del usuario, la convierte en un nĂºmero entero y la devuelve
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	es el mensaje que se mostrarĂ¡ al usuario.
             * 
             * Returns
             * -------
             * 	un valor de tipo int.
             */
            int funcionPrincipalEnteros(string mensaje){

                char *aux = leerSoloEnteros(mensaje);
                if(aux[0] != '\0'){
                    return this -> conversion.numInt(aux);
                }else{
                    cout<<"\n~~ Se ha detenido la lectura de datos ~~\n"<<endl;
                    return -10101010;
                }
                
            }

            char* lecturaNumerosChar(){
                char *aux = new char[11];
                aux = leerSoloEnteros();        
                return aux;
                
            }

            char* lecturaNumerosChar(string mensaje){
                char *aux = new char[11];
                aux = leerSoloEnteros(mensaje);   
                    return aux;
               
            }

            /**
             * Devuelve una cadena.
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	El mensaje que se mostrarĂ¡ al usuario.
             * 
             * Returns
             * -------
             * 	un puntero a un char.
             */
            char* funcionLetras(string mensaje){
                return leerLetras(mensaje);
            }

           /**
            * La funciĂ³n `funcionLetras` devuelve un puntero a una matriz de caracteres
            * 
            * Returns
            * -------
            * 	un puntero a un char.
            */
            char* funcionLetras(){
                return leerLetras();
            }

            /**
             * Devuelve un puntero a una cadena.
             * 
             * Parameters
             * ----------
             * mensaje : string
             * 	El mensaje que se mostrarĂ¡ al usuario.
             * 
             * Returns
             * -------
             * 	Un puntero a un char.
             */
            char* funcionMixta(string mensaje){
                return leerMixto(mensaje);
            }

           /**
            * Esta funciĂ³n se utiliza para leer una cadena de letras y devolverla
            * 
            * Parameters
            * ----------
            * mensaje : string
            * 	El mensaje que se mostrarĂ¡ al usuario.
            */
            void funcionPrincipalLetras(string mensaje){
                cout << leerLetras(mensaje)<<endl;
            }

           /**
            * La funciĂ³n `funcionPrincipalLetras()` es una funciĂ³n que imprime el resultado de la
            * funciĂ³n `leerLetras()`
            * 
            * La funciĂ³n `leerLetras()` es una funciĂ³n que lee una cadena y devuelve la cadena
            */
            void funcionPrincipalLetras(){
                cout << leerLetras()<<endl;
            }
            
};
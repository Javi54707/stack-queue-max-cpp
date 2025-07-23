/**
 * @file maxstack.h
 * @brief  Archivo de especificación del TDA MaxStack
 * @author
 */
#ifndef PRACTICA3_MAXSTACK_H
#define PRACTICA3_MAXSTACK_H
#include <stack>
#include <vector>
#include <sys/types.h>
#include <dirent.h>
#include <cmath>
#include <string>
#include <queue>
#include <filesystem>
#include <iostream>
using namespace std;
struct element {
    int value; // Current value to store
    int maximum; // Current max value in the structure
};

ostream& operator<<(ostream& os,const element& e);
/**

   @brief T.D.A. MaxStack

   Una instancia del tipo de dato abstracto MaxStack nos permite  almacenar una cola que contiene datos de tipo element
   para poder simular una pila.

   El TDA MaxStack proporciona además distintas herramientas para la manipulación de dicha cola, con métodos push,pop,TamPIla,top y EstaVacia.

   Para poder usar el TDA MaxStack hay que incluir el fichero
   #include <maxstack.h>

   @author Javier Ortiz Molinero, Jorge Rodríguez Lechuga.
   @date Octubre 2024

 */

class MaxStack {
    private:
       /**
        * @brief Los datos miembro son una cola de elementos de tipo element para almacenar los datos de la pila y una
        * cola con prioridad que almacena los valores máximos.
        */
       queue<element> cola;
    public:
        /**
         * @brief Colocar un elemento en la parte superior de la pila ( la que queremos simular con las colas ).
         * @param elemento Objeto que se quiere insertar en el tope de la pila ( la que queremos simular con las colas ).
         * @post Inserta el elemento pasado como argumento en la parte superior de la pila ( la que queremos simular con las colas ).
         * @return void.
         */
       void push(int elemento);

       /**
        * @brief Consultar el elemento en la parte superior de la pila( la que queremos simular con las colas ) (sin extraerlo).
        * @return Referencia constante al elemento que se encuentra en la parte superior de la pila( la que queremos simular con las colas ).
        */
       const element & top()const;

       /**
        * @brief Extraer el elemento en la parte superior de la pila( la que queremos simular con las colas ).
        * @return Devuelve el elemento que se encuentra en el tope de la pila( la que queremos simular con las colas ).
        */
       void pop();

       /**
        * @brief Consultar el tamaño de la pila( la que queremos simular con las colas ) (número de elementos que la componen).
        * @return Devuelve un entero que representa el tamaño de la pila( la que queremos simular con las colas ).
        */
       int TamPIla() const;

       /**
        * @brief Consultar si la pila ( la que queremos simular con las colas ) está vacía.
        * @return Devuelve un booleano que indica si la pila ( la que queremos simular con las colas )  tiene elementos o no:
        *  true: si contiene elementos
        *  false: si no contiene elementos.
        */
       bool EstaVacia() const;
};


#endif //PRACTICA3_MAXSTACK
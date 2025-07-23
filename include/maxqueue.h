/**
 * @file maxqueue.h
 * @brief  Archivo de especificación del TDA MaxQueue
 */

#ifndef MAXQUEUE_H
#define MAXQUEUE_H
#include <list>
#include <iostream>
using namespace std;

struct element {
 int value = 0;
 int maximum = 0;
};

ostream& operator<<(ostream& os, const element& e);

/**
 * @brief  TDA MaxQueue
 * Simulación de una cola a través de una lista que almacena además el máximo de los datos de la cola, guardando en
 * cada posición un par de enteros, siendo uno el valor y otro el máximo de la cola, en un struct de tipo element.
 *
 * Para poder usar el TDA MaxQueue se debe incluir:
 * #include "maxqueue.h"
 *
 * @author F. Javier Ortiz Molinero, Jorge Rodríguez Lechuga
 * @date Octubre 2024
 */

class MaxQueue {
private:
 list <element> lista;
public:
 /**
     * @brief Constructor sin argumentos.
     * @post Genera una instancia de la clase MaxQueue con una lista vacía.
     */
 MaxQueue();
 /**
     * @brief Constructor de copia.
     * @param mq Referencia al objeto de la clase MaxQueue original que se quiere copiar.
     */
 MaxQueue(const MaxQueue& mq);
 /**
     * @brief tamaño de la lista.
     * @return Entero que indica el tamaño de la lista.
     * @post El entero devuelto tiene que ser mayor o igual que 0.
     */
 int Size() const;
 /**
     * @brief Comprueba si la lista está vacía.
     * @return True si la lista está vacía.
     */
 bool isEmpty() const;
 /**
     * @brief Coloca un elemento nuevo al final de la lista.
     * @param nuevo Nuevo número a colocar en la lista, se calcula el máximo en el momento de colocar el número.
     */
 void push(int nuevo);
 /**
     * @brief Saca el primer elemento de la lista.
     */
 void pop();
 /**
     * @brief Consulta del primer elemento de la lista.
     * @return Primer element de la lista.
     */
 element front() const;
};

#endif
/**
 * @file maxstack.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author
 */
#include <cstring>
#include <cassert>

#include "maxstack.h"

using namespace std;

ostream &operator<<(ostream & os,const element& e){
    os << e.value << "," << e.maximum;
    return os;
}

void MaxStack::push(int elemento){
    element pair;
    pair.value=elemento;
    if(!cola.empty()){
        if(cola.back().maximum < elemento ){
            pair.maximum=elemento;
        }else{
            pair.maximum=cola.back().maximum;
        }
    }else{
        pair.maximum=elemento;
    }

    cola.push(pair);
}

const element &MaxStack::top()const{
   return (cola.back());
}

void MaxStack::pop(){
    if(cola.size() > 1){
        queue<element> aux;
        for(int i=0; i< cola.size(); i++){
            aux.push(cola.front());
            cola.pop();
        }
        cola=aux;
    }else if(cola.size() == 1){
        cola.pop();
    }
}
int MaxStack::TamPIla() const{
   return (cola.size());
}
bool MaxStack::EstaVacia() const{
    return(cola.empty());
}
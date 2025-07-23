/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del TDA MaxQueue
 * @author F. Javier Ortiz Molinero
 * @author Jorge Rodriguez Lechuga
 */

#include "maxqueue.h"
using namespace std;

ostream& operator<<(ostream& os,const element& e){
 os << e.value << "," << e.maximum;
 return os;
}

MaxQueue::MaxQueue() {}

MaxQueue::MaxQueue(const MaxQueue &mq) {
 lista = mq.lista;
}

int MaxQueue::Size() const {
 return lista.size();
}

bool MaxQueue::isEmpty() const {
 return lista.empty();
}

void MaxQueue::push(int nuevo) {
 element e;
 e.value = nuevo;

 if (isEmpty())
  e.maximum = nuevo;
 else
  e.maximum = max(nuevo, lista.back().maximum);

 lista.push_back(e);
}

void MaxQueue::pop() {
 MaxQueue mq;
 for (int i = 0; i < Size(); i++) {
  lista.pop_front();
  mq.push(lista.front().value);
 }
 *this = mq;
}

element MaxQueue::front() const {
 element e = lista.front();
 e.maximum = lista.back().maximum;
 return e;
}
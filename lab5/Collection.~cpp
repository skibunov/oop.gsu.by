#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Collection.h"


Collection::Collection(){
  size = 0;
}

Collection::~Collection(){
  delete[] b;
}

void Collection::add(Bus *bus){
  b[size] = bus;
  size = size + 1;
}

void Collection::remove(int id){
  for (int i = id; i < size - 1; i++){
    b[i] = b[i+1];
  }
  size = size - 1;
}

int Collection::getSize(){
  return size;
}

Bus* Collection::getObject(int id){
  return b[id];
}

void Collection::swap(int firstId, int secondId){
  Bus* tmp = b[firstId];
  b[firstId] = b[secondId];
  b[secondId] = tmp;
}

void Collection::sort(){
  for (int i = 0; i < size - 1; i++){
    for (int j = size - 1; j > i; j--){
      if(strcmp(b[j - 1]->getProducer(),b[j]->getProducer()) > 0){
        Bus* tmp = b[j - 1];
        b[j - 1] = b[j];
        b[j] = tmp;
      }
    }
  }

}

void Collection::print(){
  for (int i = 0; i < size; i++){
    printf("producer = %s; model = %s; number = %d; seat = %d;\n",
              b[i]->getProducer(),b[i]->getModel(),b[i]->getNumber(),b[i]->getSeat());
  }
}
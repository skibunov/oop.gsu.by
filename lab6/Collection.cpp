#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Collection.h"


Collection::Collection(){
  size = 0;
}

Collection::Collection(Collection &c){
  for (int i = 0; i < c.getSize(); i++){
    add(c.getObject(i));
  }
}

Collection::~Collection(){
  for (int i = 0; i < size; i++){
    delete b[i];
  }
}



void Collection::add(Bus *bus){
  b[size] = bus;
  size = size + 1;
}

void Collection::remove(int id){
  delete b[id];
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
        swap(j - 1, j);
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


void Collection::operator+=(Bus *bus){
  add(bus);
}

void Collection::operator+=(Bus &bus){
  add(new Bus(bus));
}

void Collection::operator-=(int id){
  remove(id);
}

void Collection::operator-=(char* name){
  for (int i = 0; i < size; i++){
    if (strcmp(b[i]->getProducer(),name) == 0){
      remove(i);
    }
  }
}

Bus* Collection::operator[](int id){
  return getObject(id);
}

Bus* Collection::operator[](char* name){
  for (int i = 0; i < size; i++){
    if (strcmp(b[i]->getProducer(),name) == 0){
      return getObject(i);
    }
  }
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#pragma hdrstop
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
      if(strcmp(b[j - 1]->getKey(),b[j]->getKey()) > 0){
        swap(j - 1, j);
      }
    }
  }
}

void Collection::print(){
  for (int i = 0; i < size; i++){
    b[i]->print();
  }
}

void Collection::print(int id){
  b[id]->print();
}

void Collection::scan(int id){
  b[id]->scan();
}

void Collection::saveFile(FILE *f){
  fprintf(f,"%d\n",size);
  for (int i = 0; i < size; i++){
    b[i]->saveFile(f);
    fprintf(f,"\n");
  }
  fclose(f);
}

void Collection::readFile(FILE *f){
  int tmpSize = 0;
  fscanf(f,"%d\n",&tmpSize);
  int type;
  for (int i = 0; i < tmpSize; i++){
    fscanf(f,"%d",&type);
    Bus *tmp;
    if (type == 0){
      tmp = new Bus();
    }
    else if (type == 1){
      tmp = new Driver();
    }
    tmp->readFile(f);
    add(tmp);
  }
  fclose(f);
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
  for (int i = size-1; i >= 0; i--){
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

 
#pragma hdrstop
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Collection.h"


Collection::Collection(){

}

Collection::Collection(Collection &c){
  for (int i = 0; i < c.getSize(); i++){
    add(new Bus(*c.getObject(i)));
  }
}

Collection::~Collection(){
  list <Bus*>::iterator it;
  for (it = arr.begin(); it != arr.end(); it++)
    delete (*it);
}

void Collection::add(Bus *bus){
  arr.push_back(bus);
}

void Collection::remove(int id){
  list <Bus*>::iterator it = arr.begin();
  advance(it, id);
  arr.erase(it);
}

int Collection::getSize(){
  return arr.size();
}

Bus* Collection::getObject(int id){
  list <Bus*>::iterator it = arr.begin();
  advance(it, id);
  return *it;
}

void Collection::swap(int firstId, int secondId){
  list <Bus*>::iterator it1 = arr.begin();
  list <Bus*>::iterator it2 = arr.begin();
  advance(it1, firstId);
  advance(it2, secondId);
  iter_swap(it1, it2);
}

bool sortList(Bus* first, Bus* second) {
  return strcmp(first->getProducer(),second->getProducer()) > 0;
}

void Collection::sort(){
  arr.sort(sortList);
}

void Collection::print(){
  list <Bus*>::iterator it;
  for (it = arr.begin(); it != arr.end(); it++)
    (*it)->print();
}
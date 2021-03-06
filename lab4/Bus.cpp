#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "Bus.h"

void Bus::setProducer(char* p){
  delete[] producer;
  producer = new char[strlen(p)+1];
  
  strcpy(producer,p);
}

void Bus::setModel(char* m){
  strcpy(model,m);
}

void Bus::setNumber(int n){
  number = n;
}

void Bus::setSeat(int s){
  seat = s;
}

char* Bus::getProducer(){
  return producer;
}

char* Bus::getModel(){
  return model;
}

int Bus::getNumber(){
  return number;
}

int Bus::getSeat(){
  return seat;
}

void Bus::print(){
  printf("producer = %s; model = %s; number = %d; seat = %d;\n",producer,model,number,seat);
}

void Bus::scan(){
  printf("Enter producer:\n");
  scanf("%s",producer);
  printf("Enter model:\n");
  scanf("%s",model);
  printf("Enter number:\n");
  scanf("%d",&number);
  printf("Enter seat:\n");
  scanf("%d",&seat);
}

Bus::Bus(){
  producer = new char;

  producer[0] = '\0';
  model[0] = '\0';
  number = 0;
  seat = 0;
}

Bus::Bus(char* p, char* m, int n, int s){
  producer = new char[strlen(p)+1];

  strcpy(producer,p);
  strcpy(model,m);
  number = n;
  seat = s;
}

Bus::Bus(Bus &b){
  producer = new char[strlen(b.getProducer())+1];

  strcpy(producer,b.getProducer());
  strcpy(model,b.getModel());
  number = b.getNumber();
  seat = b.getSeat();
}

Bus::Bus(char *t){
  producer = new char[strlen(t)+1];

  strcpy(producer,t);
  model[0] = '\0';
  number = 0;
  seat = 0;
}

Bus::~Bus(){
  delete[] producer;
}

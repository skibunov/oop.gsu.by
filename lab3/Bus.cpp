#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "Bus.h"

void Bus::setProducer(char* p){
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
  scanf("%s",&producer);
  printf("Enter model:\n");
  scanf("%s",&model);
  printf("Enter number:\n");
  scanf("%d",&number);
  printf("Enter seat:\n");
  scanf("%d",&seat);
}

Bus::Bus(){
  producer[0] = '\0';
  model[0] = '\0';
  number = 0;
  seat = 0;
}

Bus::Bus(char* p, char* m, int n, int s){
  strcpy(producer,p);
  strcpy(model,m);
  number = n;
  seat = s;
}

Bus::Bus(Bus &b){
  strcpy(producer,b.getProducer());
  strcpy(model,b.getModel());
  number = b.getNumber();
  seat = b.getSeat();
}

Bus::Bus(char *t){
  char* value = strtok(t,";");

  strcpy(producer,value);

  value = strtok ('\0',";");
  strcpy(model,value);

  value = strtok ('\0',";");
  number = atoi(value);

  value = strtok ('\0',";");
  seat = atoi(value);
}

/*Bus::~Bus(){
  printf("����������");
}*/
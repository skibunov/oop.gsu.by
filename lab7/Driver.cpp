#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#pragma hdrstop
#include "Bus.h"
#include "Driver.h"

Driver::Driver(){
  fio = new char[1];

  fio[0] = '\0';
  age = 0;
}

Driver::Driver(char* f, int a, char* p, char* m, int n, int s) : Bus(p, m, n, s){
  fio = new char[strlen(f)+1];

  strcpy(fio,f);
  age = a;
}

Driver::Driver(Driver &b) : Bus(b){
   fio = new char[strlen(b.getFio())+1];

   strcpy(fio,b.getFio());
   age = b.getAge();
}

Driver::~Driver(){
  delete[] fio;
}


void Driver::setFio(char* f){
  delete[] fio;
  fio = new char[strlen(f)+1];
  
  strcpy(fio,f);
}

void Driver::setAge(int a){
  age = a;
}

char* Driver::getFio(){
  return fio;
}

int Driver::getAge(){
  return age;
}

void Driver::print(){
  printf("fio = %s; age = %d;\n",fio,age);
  Bus::print();
}

void Driver::scan(){
  printf("Enter fio:\n");
  scanf("%s",fio);
  printf("Enter age:\n");
  scanf("%d",&age);
  Bus::scan();
}

void Driver::operator=(Driver &d){
  if (&d != this){
    setFio(d.getFio());
    setAge(d.getAge());
    *((Bus *)this) = (Bus &)d;
  }
}

char* Driver::getKey(){
  static char key[80];
  strcpy(key,"2");
  strcat(key,fio);
  return key;
}

int Driver::getType(){
  return 1;
}

void Driver::saveFile(FILE *f){
  Bus::saveFile(f);
  fprintf(f,"%s %d",fio,age);
}

void Driver::readFile(FILE *f){
  Bus::readFile(f);
  fscanf(f,"%s %d",fio,&age);
}
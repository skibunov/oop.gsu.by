#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "Bus.h"
#include "Driver.h"

Driver::Driver(){
  fio = new char[80];

  fio[0] = '\0';
  age = 0;
}

Driver::Driver(char* f, int a, char* p, char* m, int n, int s) : Bus(p, m, n, s){
  fio = new char[80];

  strcpy(fio,f);
  age = a;
}

Driver::~Driver(){
  delete[] fio;
}


void Driver::setFio(char* f){
  delete[] fio;
  fio = new char[80];
  
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
}

void Driver::scan(){
  printf("Enter fio:\n");
  scanf("%s",fio);
  printf("Enter age:\n");
  scanf("%d",&age);
}

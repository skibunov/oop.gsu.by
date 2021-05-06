#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>
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
  cout << "fio = " << fio << "; "
       << "age = " << age  << ";"
       << endl;
  Bus::print();
}

void Driver::scan(){

  cout << "Enter fio:" <<endl;
  cin >> fio;
  flushall();

  cout << "Enter age:" <<endl;
  cin >> age;
  flushall();

  Bus::scan();
}

void Driver::operator=(Driver &d){
  if (&d != this){
    setFio(d.getFio());
    setAge(d.getAge());
    *((Bus *)this) = (Bus &)d;
  }
}

ostream& operator <<(ostream &ostr, Driver &d){
  ostr << "fio = " << d.fio << "; "
       << "age = " << d.age  << ";"
       << endl;
  ostr << (Bus &) d;

  return ostr;
}

istream& operator >>(istream &istr, Driver &d){
  cout << "Enter fio:" <<endl;
  istr >> d.fio;
  flushall();

  cout << "Enter age:" <<endl;
  istr >> d.age;
  flushall();

  istr >> (Bus &) d;

  return istr;
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

void Driver::saveFile(ofstream &fout){
  Bus::saveFile(fout);
  fout << " " << fio << " " << age;
}

void Driver::readFile(ifstream &fin){
  Bus::readFile(fin);
  fin >> fio >> age;
}
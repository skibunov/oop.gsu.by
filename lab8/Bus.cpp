#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>
#pragma hdrstop
#include "Bus.h"

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

void Bus::print(ostream &ostr){
  ostr << "producer = " << producer << "; "
       << "model = " << model  << "; "
       << "number = " << number << "; "
       << "seat = " << seat << ";"
       << endl;
}

void Bus::scan(istream &istr){
  cout << "Enter producer:" <<endl;
  istr >> producer;
  flushall();

  cout << "Enter model:" <<endl;
  istr >> setw(80) >> model;
  flushall();

  cout << "Enter number:" <<endl;
  istr  >> number;
  flushall();

  cout << "Enter seat:" <<endl;
  istr  >> seat;
  flushall();
}

Bus::Bus(){
  producer = new char[1];

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
  producer = new char[strlen(t)];

  strcpy(producer,t);
  model[0] = '\0';
  number = 0;
  seat = 0;
}

char* Bus::getKey(){
  static char key[80];
  strcpy(key,"1");
  strcat(key,producer);
  return key;
}

int Bus::getType(){
  return 0;
}

void Bus::saveFile(ofstream &fout){
  fout << getType() << " " << producer << " " << model << " "
       << number << " " << seat;
}

void Bus::readFile(ifstream &fin){
  fin.ignore();
  fin >> producer >> model >> number >> seat;
}

ostream& operator <<(ostream &ostr, Bus &b){
  b.print(ostr);
  return ostr;
}

istream& operator >>(istream &istr, Bus &b){
  b.scan(istr);
  return istr;
}

void Bus::operator=(Bus &b){
  setProducer(b.getProducer());
  setModel(b.getModel());
  setNumber(b.getNumber());
  setSeat(b.getSeat());
}

Bus::~Bus(){
  delete[] producer;
}

ostream& Bus::operator >>(ostream &ostr){
  print(ostr);
  return ostr;
}

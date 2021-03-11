//---------------------------------------------------------------------------

#pragma hdrstop
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include "Bus.h"
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){
  Bus bus12;

  bus12.setProducer("Gomel");
  printf("Producer - %s\n",bus12.getProducer());

  bus12.setModel("FV15");
  printf("Model - %s\n",bus12.getModel());

  bus12.setNumber(15);
  printf("Number - %d\n",bus12.getNumber());

  bus12.setSeat(32);
  printf("Seat - %d\n",bus12.getSeat());

  bus12.scan();
  bus12.print();

  Bus* bus33 = new Bus;

  bus33->setProducer("Minsk");
  printf("Producer - %s\n",bus33->getProducer());

  bus33->setModel("ABD41");
  printf("Model - %s\n",bus33->getModel());

  bus33->setNumber(2);
  printf("Number - %d\n",bus33->getNumber());

  bus33->setSeat(10);
  printf("Seat - %d\n",bus33->getSeat());

  bus33->scan();
  bus33->print();


/*  Bus b1;
  b1.print();

  Bus b2("AD","asd",5,10);
  b2.print();

  Bus b3(b2);
  b3.print();

  Bus b4("ABC;ad;15;14");
  b4.print();

  Bus *b11 = new Bus;
  b11->print();

  Bus *b21 = new Bus("AD","asd",5,10);
  b21->print();

  Bus *b31 = new Bus(*b21);
  b31->print();

  Bus *b41 = new Bus("ABC;ad;15;14");
  b41->print(); */

  getch();
  return 0;
}
//---------------------------------------------------------------------------

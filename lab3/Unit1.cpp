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


  getch();
  return 0;
}
//---------------------------------------------------------------------------

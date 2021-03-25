//---------------------------------------------------------------------------

#pragma hdrstop
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include "Bus.h"
#include "Driver.h"
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){

  Driver kola;
  kola.print();

  Driver vova("Vladimir",19,"MAZ","F145",1586,35);
  vova.print();

  Driver yana;
  yana.setFio("Yana");
  yana.setAge(19);
  yana.print();

  Driver pasha;
  pasha.setFio("Pasha");
  pasha.setAge(18);
  printf("fio - %s;\n", pasha.getFio());
  printf("age - %d;\n", pasha.getAge());

  Driver driverBus;
  driverBus.scan();
  driverBus.print();

  Driver* ulia = new Driver;
  ulia->print();

  Driver* sasha = new Driver("Sasha",19,"MAZ","F145",1586,35);
  sasha->print();

  Driver* vlad = new Driver;
  vlad->setFio("Vlad");
  vlad->setAge(19);
  vlad->print();

  Driver* ylia = new Driver;
  ylia->setFio("Ylia");
  ylia->setAge(18);
  printf("fio - %s;\n", ylia->getFio());
  printf("age - %d;\n", ylia->getAge());

  Driver* driverBus12 = new Driver;
  driverBus12->scan();
  driverBus12->print();


  getch();
  return 0;
}
//---------------------------------------------------------------------------

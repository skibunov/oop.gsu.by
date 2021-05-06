//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <fstream.h>
#include "AbstractCollection.h"
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){

  AbstractCollection<Bus> c;
  c.add(new Bus("1","1",1,1));
  c.add(new Driver("2",2,"2","2",2,2));

  cout << c.getSize() << endl;

  Bus *b = c[0];
  b->print();

  cout << "swap" << endl;

  c.swap(0,1);
  c.print();

  cout << "Sort" << endl;

  c.sort();
  c.print();

  c.scan(0);
  c.print();

  c.saveFile("list.txt");
  c.readFile("list.txt");
  c.print();



  getch();
  return 0;
}
//---------------------------------------------------------------------------


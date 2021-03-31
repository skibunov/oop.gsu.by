//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Collection.h"
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){
  Bus *b1 = new Bus;
  Bus *b2 = new Bus("2","2",15,63);
  Bus *b3 = new Bus("3","3",15,63);

  Collection c;
  c.add(b3);
  c.add(b2);
  c.add(b1);
  c.sort();
  c.print();


  getch();
  return 0;
}
//---------------------------------------------------------------------------
 
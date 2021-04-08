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

  Bus *b1 = new Bus("MAZ105","Model05",35,14);
  Bus *b2 = new Bus("MAZ215","Mode215",35,14);
  Bus *b3 = new Bus("MAZ310","Model310",35,14);
  Bus b("AV1231","Model1231",15,15);

  Collection c;

  c+=b1;
  c+=b2;
  c+=b3;
  c+=b;

  c-=0;
  c-="1231";

  Bus *b4 = c[1];
  Bus *b5 = c["MAZ215"];

  b4->print();
  b5->print();

  c.print();

  getch();
  return 0;
}
//---------------------------------------------------------------------------
 

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

  Collection c;
  c.add(new Bus("MAZ105","Model05",35,14));
  c.add(new Bus("MAZ215","Mode215",35,14));
  c.add(new Bus("MAZ310","Model310",35,14));

  Collection c2(c);
  c2.print();




  getch();
  return 0;
}
//---------------------------------------------------------------------------
 

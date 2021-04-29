//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Bus.h"
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){
   Bus b("1","2",3,4);
   b.print();


  getch();
  return 0;
}
//---------------------------------------------------------------------------


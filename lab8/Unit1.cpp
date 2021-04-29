//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <fstream.h>
#include "Collection.h"
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){

  Bus *b1 = new Driver("2",18,"1","1",1,1);
  Bus *b5 = new Driver("1",18,"1","1",1,1);
  Bus *b6 = new Driver("3",18,"1","1",1,1);
  Bus *b2 = new Bus("1","2",2,2);
  Bus *b3 = new Bus("3","2",2,2);
  Bus *b4 = new Bus("2","2",2,2);

  Collection c;

  c+=b1;
  c+=b5;
  c+=b6;
  c+=b2;
  c+=b3;
  c+=b4;

  c.saveFile("list.txt");

  Collection tmp;
  tmp.readFile("list.txt");
  tmp.print();

  printf("____---------------------");
  Driver b55("1",2,"3","4",5,6);
  cin >> b55;
  cout << b55;

  getch();
  return 0;
}
//---------------------------------------------------------------------------


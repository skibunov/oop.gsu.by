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

/*  FILE *f = fopen("list.txt","w");
  Bus *t2 = new Driver("2",2,"2","2",2,2);
  t2->print();

  Collection c;
  Bus *b1 = new Driver("2",18,"1","1",1,1);
  Bus *b5 = new Driver("1",18,"1","1",1,1);
  Bus *b6 = new Driver("3",18,"1","1",1,1);
  Bus *b2 = new Bus("1","2",2,2);
  Bus *b3 = new Bus("3","2",2,2);
  Bus *b4 = new Bus("2","2",2,2);

  c+=b1;
  c+=b2;
  c+=b5;
  c+=b6;
  c+=b3;
  c+=b4;



  c.print(0);
  c.scan(0);

  c.sort();
  c.print();

  c.saveFile(f);



  c.readFile(f);


  c.print();    */


  FILE *f = fopen("list.txt","r");
  Collection c;
  Bus *b1 = new Driver("2",18,"1","1",1,1);
  Bus *b5 = new Driver("1",18,"1","1",1,1);
  Bus *b6 = new Driver("3",18,"1","1",1,1);
  Bus *b2 = new Bus("1","2",2,2);
  Bus *b3 = new Bus("3","2",2,2);
  Bus *b4 = new Bus("2","2",2,2);


  c.readFile(f);
  c.print();


  getch();
  return 0;
}
//---------------------------------------------------------------------------


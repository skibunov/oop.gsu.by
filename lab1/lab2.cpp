//---------------------------------------------------------------------------
//Скибунов андрей
//23. Дана строка. Найти в строке длину самой длинной подстроки из одинаковых символов.
#pragma hdrstop
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
//---------------------------------------------------------------------------
int foundSubString(char *string){
  int max = 1;
  int count = 1;
  char* t;
  for(t = string; *t != '\0'; ++t){
    if(*t == *(t+1)){
      count++;
    }
    else{
      if(count > max){
        max = count;
      }
      count = 1;
    }
  }
  return max;
}

#pragma argsused
int main(int argc, char* argv[]){
  char* string = new char[256];

  puts("Enter string: ");
  gets(string);


  int maxCol = foundSubString(string);

  printf("%d",maxCol);

  delete []string;
  getch();
  return 0;
}
//---------------------------------------------------------------------------
 
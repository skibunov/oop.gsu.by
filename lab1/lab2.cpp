//---------------------------------------------------------------------------
//�������� ������
//23. ���� ������. ����� � ������ ����� ����� ������� ��������� �� ���������� ��������.
#pragma hdrstop
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
//---------------------------------------------------------------------------
int foundSubString(char *string){
  int max = 1;
  int count = 1;
  int len = strlen(string) - 1;
  for(int i = 0; i < len; i++){
    if(*(string + i) == *(string + i - 1)){
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
/*  char xx[] = "abcaab";
  char* t;
  int count = 0;
  for(t = xx; *t; ++t)
    if (*t == 'a')
      count++;

  t = xx;
  while (*t){
    if (*t == 'a')
      count++;
    t++;
  }

  printf("%d\n",count); */





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
 
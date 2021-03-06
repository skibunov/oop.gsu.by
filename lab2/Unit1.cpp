//---------------------------------------------------------------------------
//Скибунов Андрей
//26) представитель общественного транспорта;
#pragma hdrstop
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include "Bus.h"
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[]){
  Bus bus12;

  printf("Enter producer:\n");
  scanf("%s",&bus12.producer);
  printf("Enter model:\n");
  scanf("%s",&bus12.model);
  printf("Enter number:\n");
  scanf("%d",&bus12.number);
  printf("Enter seat:\n");
  scanf("%d",&bus12.seat);

  printf("producer = %s; model = %s; number = %d; seat = %d;\n",bus12.producer,bus12.model,bus12.number,bus12.seat);

  Bus *bus13;
  bus13 = new Bus;

  printf("Enter producer:\n");
  scanf("%s",&bus13->producer);
  printf("Enter model:\n");
  scanf("%s",&bus13->model);
  printf("Enter number:\n");
  scanf("%d",&bus13->number);
  printf("Enter seat:\n");
  scanf("%d",&bus13->seat);

  printf("producer = %s; model = %s; number = %d; seat = %d;\n",bus13->producer,bus13->model,bus13->number,bus13->seat);

  int n;
  printf("Enter n:\n");
  scanf("%d",&n);

  Bus buses[10];

  for(int i = 0; i < n; i++){
    printf("Enter producer:\n");
    scanf("%s",&buses[i].producer);
    printf("Enter model:\n");
    scanf("%s",&buses[i].model);
    printf("Enter number:\n");
    scanf("%d",&buses[i].number);
    printf("Enter seat:\n");
    scanf("%d",&buses[i].seat);
  }

  for(int i = 0; i < n; i++){
    printf("producer = %s; model = %s; number = %d; seat = %d;\n",buses[i].producer,buses[i].model,buses[i].number,buses[i].seat);
  }

  int m;
  printf("Enter m:\n");
  scanf("%d",&m);

  Bus *busmas;
  busmas = new Bus[m];

  for(int i = 0; i < m; i++){
    printf("Enter producer:\n");
    scanf("%s",&busmas[i].producer);
    printf("Enter model:\n");
    scanf("%s",&busmas[i].model);
    printf("Enter number:\n");
    scanf("%d",&busmas[i].number);
    printf("Enter seat:\n");
    scanf("%d",&busmas[i].seat);
  }

  for(int i = 0; i < m; i++){
    printf("producer = %s; model = %s; number = %d; seat = %d;\n",busmas[i].producer,busmas[i].model,busmas[i].number,busmas[i].seat);
  }

  bool cheack = false;
  if(m == n){
    for(int i = 0; i < n; i++){
      if(strcmp(busmas[i].producer, buses[i].producer) == 0
      && strcmp(busmas[i].model,buses[i].model) == 0
      && busmas[i].number == buses[i].number
      && busmas[i].seat == buses[i].seat){
        cheack = true;
      }
      else{
        cheack = false;
        break;
      }
    }
  }

  printf("%d",cheack);

  delete[] bus13;
  delete[] busmas;
  
  getch();
  return 0;
}
//---------------------------------------------------------------------------
 
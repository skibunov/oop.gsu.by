//---------------------------------------------------------------------------
//Скибунов Андрей
//26) представитель общественного транспорта;
#pragma hdrstop
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//---------------------------------------------------------------------------

class Bus{
  public:
    char producer[80];
    char model[80];
    int number;
    int seat;
};

#pragma argsused
int main(int argc, char* argv[]){
  Bus bus12;

  Bus busmas[4];

  printf("Enter producer:\n");
  scanf("%s",&bus12.producer);
  printf("Enter model:\n");
  scanf("%s",&bus12.model);
  printf("Enter number:\n");
  scanf("%d",&bus12.number);
  printf("Enter seat:\n");
  scanf("%d",&bus12.seat);

  for(int i = 0; i < 4; i++){
    printf("Enter producer:\n");
    scanf("%s",&busmas[i].producer);
    printf("Enter model:\n");
    scanf("%s",&busmas[i].model);
    printf("Enter number:\n");
    scanf("%d",&busmas[i].number);
    printf("Enter seat:\n");
    scanf("%d",&busmas[i].seat);
  }

  printf("producer = %s; model = %s; number = %d; seat = %d;\n",bus12.producer,bus12.model,bus12.number,bus12.seat);
  for(int i = 0; i < 4; i++){
    printf("producer = %s; model = %s; number = %d; seat = %d;\n",busmas[i].producer,busmas[i].model,busmas[i].number,busmas[i].seat);
  }



  getch();
  return 0;
}
//---------------------------------------------------------------------------
 
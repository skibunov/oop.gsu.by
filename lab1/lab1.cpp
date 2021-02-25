//---------------------------------------------------------------------------
//Скибунов Андрей
//25. Дан массив целых чисел A[n][m]. В заданной строке массива каждый элемент, кроме первого, заменить суммой всех предыдущих.
#pragma hdrstop
#include<stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------

//Функция нахождения и замены элементов суммой всех предыдущих.
void sumBefore(int** array,int n, int m){
  int sum = 0;
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      for (int k = 0; k <= j; k++)
        sum = sum + array[i][k]; //Сумма предыдущих элементов с учетом замены

      array[i][j] = sum;
      sum = 0;
    }
  }
}

#pragma argsused
int main(int argc, char* argv[]){
  int n,m;

  printf("Enter n - ");
  scanf("%d",&n);

  printf("Enter m - ");
  scanf("%d",&m);

  //Выделение памяти под массив
  int **array = new int*[n];
  for (int i = 0; i < n; i++){
    array[i] = new int[m];
  }

  //Ввод массива с клавиатуры
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("Enter array element[%i,%i] - ",i+1,j+1);
      scanf("%d",&array[i][j]);
    }
  }

  //Вывод базового(не измененного) массива
  printf("Base Array\n");
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("%d ",array[i][j]);
    }
    printf("\n");
  }

  //Вызов функции, которая вычисляет сумму предыдущих и заменяет элемет на эту сумму
  sumBefore(array,n,m);

  //Вывод измененного массива
  printf("Rebase Array\n");
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("%d ",array[i][j]);
    }
    printf("\n");
  }

  getch();
  delete []array;
  return 0;
}
//---------------------------------------------------------------------------
 
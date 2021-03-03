//---------------------------------------------------------------------------
//Скибунов Андрей
//23. Дан массив целых чисел A[n][m]. Определить, есть ли в массиве ровно две строки только с отрицательными элементами.
#pragma hdrstop
#include<stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------

bool foundTwoStrWithNegativ(int** array,int n, int m){
  int colStr = 0;
  for(int  i = 0; i < n; i++){
    int j = 0;
    for (j = 0; j < m; j++){
      if(array[i][j] >= 0){
        break;
      }
    }
    if (j == m){
      colStr++;
    }

    if(colStr > 2){
      return false;
    }

  }

  return true;
}

#pragma argsused
int main(int argc, char* argv[]){
  int n,m;

  printf("Enter n - ");
  scanf("%d",&n);

  printf("Enter m - ");
  scanf("%d",&m);

  int **array;
  array = new int*[n];
  for (int i = 0; i < n; i++){
    array[i] = new int[m];
  }

  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("Enter array element[%i,%i] - ",i,j);
      scanf("%d",&array[i][j]);
    }
  }

  printf("Base Array\n");
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("%d ",array[i][j]);
    }
    printf("\n");
  }

  bool cheackFound = foundTwoStrWithNegativ(array,n,m);

  if(cheackFound){
    printf("Found string with negativ = 2");
  }
  else{
    printf("Found string with negativ != 2");
  }

  for (int i = 0; i < m; i++){
    delete []array[i];
  }
  delete []array;

  getch();
  return 0;
}
//---------------------------------------------------------------------------
 
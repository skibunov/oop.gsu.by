//---------------------------------------------------------------------------
//�������� ������
//25. ��� ������ ����� ����� A[n][m]. � �������� ������ ������� ������ �������, ����� �������, �������� ������ ���� ����������.
#pragma hdrstop
#include<stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------

//������� ���������� � ������ ��������� ������ ���� ����������.
void sumBefore(int** array,int n, int m){
  int sum = 0;
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      for (int k = 0; k <= j; k++)
        sum = sum + array[i][k]; //����� ���������� ��������� � ������ ������

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

  //��������� ������ ��� ������
  int **array = new int*[n];
  for (int i = 0; i < n; i++){
    array[i] = new int[m];
  }

  //���� ������� � ����������
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("Enter array element[%i,%i] - ",i+1,j+1);
      scanf("%d",&array[i][j]);
    }
  }

  //����� ��������(�� �����������) �������
  printf("Base Array\n");
  for(int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("%d ",array[i][j]);
    }
    printf("\n");
  }

  //����� �������, ������� ��������� ����� ���������� � �������� ������ �� ��� �����
  sumBefore(array,n,m);

  //����� ����������� �������
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
 
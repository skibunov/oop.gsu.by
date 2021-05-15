//---------------------------------------------------------------------------

#pragma hdrstop
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include <vector>
#include <algorithm>

using namespace std;
//---------------------------------------------------------------------------
/*
  Дан массив из N целых чисел.
  Найти количество элементов, расположенных до первого элемента, кратного 5.
  Удвоить элементы массива, равные k.
  Если размер массива больше 4, то переставить первые 5 элементов в обратном порядке.
  Перенести все нулевые элементы в конец массива, не меняя порядок следования остальных элементов.
  Отсортировать по возрастанию часть массива до первого по порядку максимального элемента.
*/
//---------------------------------------------------------------------------

void scan(vector<int> &arr){
  for (int i = 0; i < arr.size(); i++){
    cout << "arr[" << i << "] - ";
    cin >> arr[i];
  }
}

void print(vector<int> &arr){
  vector<int>::iterator it;
  for (it = arr.begin(); it !=arr.end(); it++)
    cout << *it << " ";
  cout << endl;
}

bool isEven(int val){
    return (val % 5 == 0);
}

//Найти количество элементов, расположенных до первого элемента, кратного 5.
int task_1(vector<int> &arr){
  vector<int>::iterator it = find_if(arr.begin(), arr.end(), isEven);
  if (it == arr.end())
    return 0;
  return it - arr.begin();
}

int k = 0;
void doubleValue(int &val){
  if (val == k)
    val = val * 2;
}

//Удвоить элементы массива, равные k.
void task_2(vector<int> &arr){
  cout << "Enter k - ";
  cin >> k;

  for_each(arr.begin(), arr.end(), doubleValue);
}

//Если размер массива больше 4, то переставить первые 5 элементов в обратном порядке.
void task_3(vector<int> &arr){
  if (arr.size() > 4)
    reverse(arr.begin(),arr.begin() + 5);
}

void zeroVal(int &val){
  val = 0;
}

//Перенести все нулевые элементы в конец массива, не меняя порядок следования остальных элементов.
void task_4(vector<int> &arr){
  vector<int>::iterator it = remove(arr.begin(), arr.end(), 0);
  for_each(it, arr.end(), zeroVal);
}

//Отсортировать по возрастанию часть массива до первого по порядку максимального элемента.
void task_5(vector<int> &arr){
  vector<int>::iterator it = max_element(arr.begin(), arr.end());
  sort(arr.begin(), it);
}


#pragma argsused
int main(int argc, char* argv[]) {
  int n = 0;
  cout << "Enter size N: " << endl;
  cin >> n;

  vector<int> arr(n);
  scan(arr);

  task_5(arr);

  print(arr);


  getch();
  return 0;
}
//---------------------------------------------------------------------------
 
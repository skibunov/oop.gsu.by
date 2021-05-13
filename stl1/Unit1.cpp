//---------------------------------------------------------------------------

#pragma hdrstop
#include <vcl.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include <string>
#include <algorithm>

using namespace std;
//---------------------------------------------------------------------------

void print(string* s, int n){
  for(int i = 0; i < n; i++)
    cout << s[i] <<endl;
}


//������������� �������� ������, ������� � ������ ����� ������ ����� 2 ��������
//����� ������ ����� ��������� �� ���� ��������� ���� ����� �� �����.
void task_1(string* s, int n){
  for (int i = 0; i < n; i++){
    if (s[i].length() > 2){
      s[i].insert(2, s[i].substr(0, 2));
    }
  }
}

//������� �� ���� ���� ������� ��� �����.
void task_2(string* s, int n){
  string numbers = "0123456789";
  string::size_type pos;
  for (int i = 0; i < n; i++){
    while((pos = s[i].find_first_of(numbers)) != string::npos)
      s[i].erase(pos,1);
  }
}

//������������ ����������� �� ��� ���� ����������� �������, ������� ��������
//                                                          "�������������".
//����� � ����������� ������ ���� ����������� �� ��������.
string task_3(string* s, int n) {
  string res;
  sort(s, s + n);
  for (int i = 0; i < n; i++){
    string tmp(s[i]);
    reverse(tmp.begin(), tmp.end());
    if (s[i].compare(tmp) == 0)
       res.append(s[i]).append(" ");
  }
  return res;
}


#pragma argsused
int main(int argc, char* argv[]) {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  string s[5];

  for (int i = 0; i < 5; i++){
    cin >> s[i];
  }


  cout << task_3(s, 5) << endl;


  print(s, 5);


  getch();
  return 0;
}
//---------------------------------------------------------------------------
 
#include "Bus.h"
#include "Driver.h"

template <typename Type>
class AbstractCollection{
  private:
    Type *type[35];
    int size;
  public:
    AbstractCollection(){
      size = 0;
    }

    AbstractCollection(AbstractCollection &c){
      for (int i = 0; i < c.getSize(); i++){
        add(c.getObject(i));
      }
    }

    void add(Type *t){
      type[size] = t;
      size = size + 1;
    }

    void remove(int id){
      delete type[id];
      for (int i = id; i < size - 1; i++){
        type[i] = type[i+1];
      }
      size = size - 1;
    }

    int getSize(){
      return size;
    }

    Type* getObject(int id){
      return type[id];
    }

    void swap(int firstId, int secondId){
      Type* tmp = type[firstId];
      type[firstId] = type[secondId];
      type[secondId] = tmp;
    }

    void sort(){
      for (int i = 0; i < size - 1; i++){
        for (int j = size - 1; j > i; j--){
          char tmp[80];
          strcpy(tmp,type[j]->getKey());
          if(strcmp(type[j - 1]->getKey(),tmp) > 0){
            swap(j - 1, j);
          }
        }
      }
    }

    void print(){
      for (int i = 0; i < size; i++){
        type[i]->print();
      }
    }

    void print(int id){
      type[id]->print();
    }

    void scan(int id){
      type[id]->scan();
    }

    void saveFile(char *name){
      ofstream fout(name, ios::out);
      if (!fout){
        cout << "File not found" << endl;
        return;
      }

      fout << size << endl;
      for (int i = 0; i < size; i++){
        type[i]->saveFile(fout);
        fout << endl;
      }
    }

    void readFile(char *name){
      ifstream fin(name, ios::in);

      if (!fin){
        cout << "Error open file output" << endl;
        return;
      }

      int tmpSize = 0;
      fin >> tmpSize;
      int type;

      for (int i = 0; i < tmpSize; i++){
        fin >> type;
        Type *tmp;
        if (type == 0){
          tmp = new Bus();
        }
        else if (type == 1){
          tmp = new Driver();
        }
        tmp->readFile(fin);
        add(tmp);
      }
    }

    void operator+=(Type *type){
      add(type);
    }

    void operator-=(int id){
      remove(id);
    }

    void operator-=(char* name){
      for (int i = size-1; i >= 0; i--){
        if (strcmp(type[i]->getProducer(),name) == 0){
          remove(i);
        }
      }
    }

    Type* operator[](int id){
      return getObject(id);
    }

    Type* operator[](char* name){
      for (int i = 0; i < size; i++){
        if (strcmp(type[i]->getProducer(),name) == 0){
          return getObject(i);
        }
      }
    }

};

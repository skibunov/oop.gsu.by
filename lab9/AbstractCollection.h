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



        add(c.getObject(i));
      }
    }



      size = size + 1;
    }



      for (int i = id; i < size - 1; i++){
        type[i] = type[i+1];
      }
      size = size - 1;
    }



    }



    }



      type[firstId] = type[secondId];
      type[secondId] = tmp;
    }



        for (int j = size - 1; j > i; j--){
          char tmp[80];
          strcpy(tmp,type[j]->getKey());
          if(strcmp(type[j - 1]->getKey(),tmp) > 0){
            swap(j - 1, j);
          }
        }
      }
    }



        type[i]->print();
      }
    }



    }



    }



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



    }



    }



        if (strcmp(type[i]->getProducer(),name) == 0){
          remove(i);
        }
      }
    }



    }



        if (strcmp(type[i]->getProducer(),name) == 0){
          return getObject(i);
        }
      }
    }


#include "Bus.h"

class Collection{
  private:
    Bus *b[35];
    int size;
  public:
    Collection();
    ~Collection();
    Collection(Collection &c);
    void add(Bus *bus);
    void remove(int id);
    int getSize();
    Bus* getObject(int id);
    void swap(int firstId, int secondId);
    void sort();
    void print();

    void operator+=(Bus *bus);
    void operator+=(Bus &bus);
    void operator-=(int id);
    void operator-=(char* name);
    Bus* operator[](int id);
    Bus* operator[](char* name);

};
 
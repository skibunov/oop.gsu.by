#include "Bus.h"

class Collection{
  private:
    Bus *b[35];
    int size;
  public:
    Collection();
    ~Collection();
    void add(Bus *bus);
    void remove(int id);
    int getSize();
    Bus* getObject(int id);
    void swap(int firstId, int secondId);
    void sort();
    void print();
};
 
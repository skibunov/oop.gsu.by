#pragma hdrstop
#include <list>
#include "Bus.h"
using namespace std;

class Collection{
  private:
    list<Bus *> arr;
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
};
 
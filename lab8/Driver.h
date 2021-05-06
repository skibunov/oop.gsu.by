#include <iostream.h>

class Driver : public Bus {
  private:
    char* fio;
    int age;
  public:
    Driver();
    Driver(char* f, int a, char* p, char* m, int n, int s);
    Driver(Driver &b);
    virtual ~Driver();

    void setFio(char* f);
    void setAge(int a);

    char* getFio();
    int getAge();
    virtual void print(ostream &ostr = cout);
    virtual void scan(istream &istr = cin);

    virtual char* getKey();
    virtual int getType();
    virtual void saveFile(ofstream &fout);
    virtual void readFile(ifstream &fin);

    void operator=(Driver &d);
    friend ostream& operator <<(ostream &ostr, Driver &d);
    friend istream& operator >>(istream &istr, Driver &d);

    ostream& operator >>(ostream &ostr);

};

 
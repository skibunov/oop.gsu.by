#include <iostream.h>

class Bus{
  private:
    char* producer;
    char model[80];
    int number;
    int seat;
  public:
    Bus();
    Bus(char* p, char* m, int n, int s);
    Bus(Bus &b);
    Bus(char *t);
    virtual ~Bus();

    void setProducer(char* p);
    void setModel(char* m);
    void setNumber(int n);
    void setSeat(int s);

    char* getProducer();
    char* getModel();
    int getNumber();
    int getSeat();

    virtual void print(ostream &ostr = cout);
    virtual void scan(istream &istr = cin);

    virtual char* getKey();
    virtual int getType();
    virtual void saveFile(ofstream &fout);
    virtual void readFile(ifstream &fin);

    void operator=(Bus &b);
    friend ostream& operator <<(ostream &ostr, Bus &b);
    friend istream& operator >>(istream &istr, Bus &b);


    ostream& operator >>(ostream &ostr);

};

 
class Bus{
  private:
    char producer[80];
    char model[80];
    int number;
    int seat;
  public:
    void setProducer(char* p);
    void setModel(char* m);
    void setNumber(int n);
    void setSeat(int s);

    char* getProducer();
    char* getModel();
    int getNumber();
    int getSeat();

    void print();
    void scan();

    Bus();
    Bus(char* p, char* m, int n, int s);
    Bus(Bus &b);
    Bus(char *s);

    //~Bus();

};
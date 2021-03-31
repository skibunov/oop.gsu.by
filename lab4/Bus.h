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
    Bus(char *s);

    ~Bus();

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

};
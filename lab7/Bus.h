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

    virtual void print();
    virtual void scan();

    virtual char* getKey();
    virtual int getType();
    virtual void saveFile(FILE *f);
    virtual void readFile(FILE *f);

    void operator=(Bus &b);

};

 
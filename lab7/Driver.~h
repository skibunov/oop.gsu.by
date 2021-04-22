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
    virtual void print();
    virtual void scan();

    virtual char* getKey();
    virtual void saveFile(FILE *f);
    virtual void readFile(FILE *f);

    void operator=(Driver &d);



};

 
class Driver : public Bus {
  private:
    char* fio;
    int age;
  public:
    Driver();
    Driver(char* f, int a, char* p, char* m, int n, int s);
    ~Driver();

    void setFio(char* f);
    void setAge(int a);

    char* getFio();
    int getAge();

    void print();
    void scan();


};
 
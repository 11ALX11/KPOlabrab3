#ifndef PRODUCTH
#define PRODUCTN

class Product {

    private:
    
    char *name;
    char *code;
    int quantity;

    public:

    Product();
    Product(char *name, char *code, int quantity);
    Product(const Product&);

    ~Product();

    void setName(char *name);
    char *getName();

    void setCode(char *code);
    char *getCode();
        
    void setQuantity(int qt);
    int getQuantity();
};

#endif
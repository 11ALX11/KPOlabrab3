#include <string.h>
#include "product.h"

Product::Product() {
    this->quantity = 1;
}
Product::Product(char *name, char *code, int quantity=1) {
    this->name = new char[strlen(name)];
    strcpy(this->name, name);
    this->code = new char[strlen(code)];
    strcpy(this->code, code);
    this->quantity = quantity;
}
Product::Product(const Product& pr) {
    this->name = new char[strlen(pr.name)];
    strcpy(this->name, pr.name);
    this->code = new char[strlen(pr.code)];
    strcpy(this->code, pr.code);
    this->quantity = pr.quantity;
}
Product::~Product() {
    delete this->name;
    delete this->code;
}

void Product::setName(char *name) {
    delete this->name;
    this->name = new char[strlen(name)];
    strcpy(this->name, name);
}
char *Product::getName() {
    return this->name;
}

void Product::setCode(char *code) {
    delete this->code;
    this->code = new char[strlen(code)];
    strcpy(this->code, code);
}
char *Product::getCode() {
    return this->code;
}
    
void Product::setQuantity(int qt) {
    this->quantity = qt;
}
int Product::getQuantity() {
    return this->quantity;
}
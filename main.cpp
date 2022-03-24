#include <iostream>
#include "ProductDefined.h"

using namespace std;

int main() {
    Product *pr1 = new Product("Gear", "id_1", 10);
    Product *pr2 = new Product();

    cout << pr1->getName() << ' ' << pr1->getCode() << ' ' << pr1->getQuantity() << endl;
    cout << pr2->getName() << ' ' << pr2->getCode() << ' ' << pr2->getQuantity() << endl;

    pr2 = new Product(*pr1);
    pr2->setCode("id_2");

    cout << pr1->getName() << ' ' << pr1->getCode() << ' ' << pr1->getQuantity() << endl;
    cout << pr2->getName() << ' ' << pr2->getCode() << ' ' << pr2->getQuantity() << endl;
    
    int (Product::*pointer)();
    pointer = &Product::getQuantity;
    cout << (pr1->*pointer)() << endl;
    
    delete pr1;
    delete pr2;

    return 0;
}

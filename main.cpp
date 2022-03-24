#include <iostream>
#include "ProductDefined.h"

using namespace std;

int main() {
    char name[] = "Alex";
    char code[] = "123124";
    Product *pr = new Product(name, code, 5);

    cout << pr->getName() << ' ' << pr->getCode() << ' ' << pr->getQuantity() << endl;

    return 0;
}

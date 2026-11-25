#include <list>
#include "Product.h"

int main() {

    std::list<Product*> shop;

    shop.push_back(new Product("Milk", 100, 1, Date()-1, 7));
    shop.push_back(new Product("Cheese", 200, 0.5, Date()-30, 7));
    shop.push_back(new Product("Apple", 50, 2, Date()-7, 30));




    return 0;
}
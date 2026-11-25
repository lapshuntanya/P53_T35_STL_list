#include <list>
#include "Product.h"
#include <algorithm>

int main() {

    std::list<Product*> shop;

    shop.push_back(new Product("Milk", 100, 1, Date()-1, 7));
    shop.push_back(new Product("Cheese", 200, 0.5, Date()-30, 7));
    shop.push_back(new Product("Apple", 50, 2, Date()-7, 30));

    for (auto item: shop) {
        item->showInfo();
    }
    cout << "++++++++++++++++++++++++++++++++\n\n";
    std::list<Product*>::iterator p;
    for (p = shop.begin(); p != shop.end(); p++) {
        (*p)->showInfo();
    }

    cout << "++++++++++++++++++++++++++++++++\n\n";
    cout << "++++++++++++++++++++++++++++++++\n\n";
    cout << "++++++++++++++++++++++++++++++++\n\n";

    //Знайти товар за назвою та видалити його
    string name = "Apple";
    auto find = std::find_if(shop.begin(), shop.end(), [name](Product* item) {
        return item->getName() == name;
    });
    if ( find == shop.end()) cout << "Not found!\n";
    else {
        shop.erase(find);
        cout << name << " deleted!" << endl;
    }
    cout << "Amount of products: " << shop.size() << endl;


    return 0;
}
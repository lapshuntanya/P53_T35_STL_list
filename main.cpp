#include "MyList.h"
#include "MyDList.h"

int main() {

    // int a[3] = {5, 6, 7}; //.... .... ....
    //
    // //8 2 9
    // Node<int> first(8);   //info = 8, next = &second
    //
    // Node<int> second(2);  //info = 2, next = &third
    // first.next = &second;
    //
    // Node<int> third(9); //info = 9, next = nullptr;
    // second.next = &third;
    //
    //
    // //Обробка списку
    // Node<int>* p = &first;
    // while (p != nullptr) {
    //     cout << p->info << " "; //8
    //     p = p->next;
    // }


    DList<int> nums; //head = tail = nullptr;

    nums.push_back(7); //head = &7, tail = &7
    nums.push_back(2); //head = &7, tail = &2
    nums.push_back(2); //head = &7, tail = &2
    nums.push_back(30); //head = &7, tail = &30
    nums.push_back(587); //head = &7, tail = &587
    nums.push_back(8); //head = &7, tail = &8

    nums.show();
    nums.show_reverse();

    DNode<int>* find = nums.search(8);
    if (find == nullptr) cout << "Not found!\n";
    else find->showDNode();

    find = nums.search(-8);
    if (find == nullptr) cout << "Not found!\n";
    else find->showDNode();

    return 0;
}
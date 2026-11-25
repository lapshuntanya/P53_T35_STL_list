#include "MyList.h"


int main() {

    int a[3] = {5, 6, 7}; //.... .... ....

    //8 2 9
    Node<int> first(8);   //info = 8, next = &second

    Node<int> second(2);  //info = 2, next = &third
    first.next = &second;

    Node<int> third(9); //info = 9, next = nullptr;
    second.next = &third;


    //Обробка списку
    Node<int>* p = &first;
    while (p != nullptr) {
        cout << p->info << " "; //8
        p = p->next;
    }


    return 0;
}
#pragma once
#include <iostream>
using std::cout;
using std::endl;


template <typename T>
class DNode {
public:
    T info;
    DNode* next;
    DNode* prev;

    DNode(T value) {
        info = value;
        next = prev = nullptr;
    }
    void showDNode()const {
        cout << "INFO: " << info << endl;
        cout << "\t PREV: " << prev << endl;
        cout << "\t NEXT: " << next << endl;
    }
};


template <typename U>
class DList {
    DNode<U>* head;
    DNode<U>* tail;
public:
    DList() { head = nullptr; tail = nullptr; }

    void push_back(U value) { //Добавлення нового вузла в кінець списку
        DNode<U>* new_element = new DNode<U>(value); // info = 2, prev = next = nullptr

        if (head == nullptr || tail == nullptr) {
            head = tail = new_element;
        }else {
            tail->next = new_element;
            new_element->prev = tail;

            tail = new_element;
        }
    }
    void show() {//Виведення списку на екран
        DNode<U>* p = head;
        while (p!= nullptr) {
            cout << p->info << " ";
            p = p->next;
        }
        cout << endl;
    }

    void show_reverse() {//Виведення списку на екран в зворотньому порядку
        DNode<U>* p = tail;
        while (p!= nullptr) {
            cout << p->info << " ";
            p = p->prev;
        }
        cout << endl;
    }

    DNode<U>* search(U value) { //Пошук вузла із заданим значенням

        DNode<U>* p = head;
        while (p!= nullptr) {
           if ( p->info == value) {
               return p;
           }
            p = p->next;
        }
        return nullptr;
    }
};
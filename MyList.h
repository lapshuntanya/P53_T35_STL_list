#pragma once
#include <iostream>
using std::cout;
using std::endl;


template <typename T>
class Node {
public:
    T info;
    Node* next;

    Node(T value) {
        info = value;
        next = nullptr;
    }
    void showNode()const {
        cout << "INFO: " << info << endl;
        cout << "\t NEXT: " << next << endl;
    }
};


template <typename U>
class MyList {
    Node<U>* head; // покажчик (адреса) на перший вузол
    Node<U>* tail; // покажчик (адреса) на останній вузол
public:
    MyList() {
        head = tail = nullptr;
    }
    ~MyList() {
        //delete
    }
    void push_back(U value) {

    }
};
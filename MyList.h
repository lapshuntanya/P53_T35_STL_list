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
        //1. Створюємо новий вузол
        Node<U>* new_element = new Node<U>(value); // info=7, next=nullptr

        //2. Привʼязуємо новий вузол до списку
        if (head == nullptr || tail == nullptr) {
            //Це перший вузол в списку
            head = new_element;
            tail = new_element;
            //head = tail = new_element;
        } else {
            //Це НЕ перший вузол в списку
            tail->next = new_element; //Зберігаємо в хвіст адресу нового вузла
            tail = new_element; //Зсовуємо хвіст на останній елемент
        }

    }

    void showMyList()const {
        Node<U>* p = head;
        while (p!= nullptr) {
            p->showNode();
            p = p->next;
        }
    }
};
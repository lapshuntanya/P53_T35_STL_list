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
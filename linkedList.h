#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "node.cpp"
 
using namespace std;
class LinkedList{
    int size;
    Node* head;
    public:
        LinkedList();
        ~LinkedList();

        void insert(int);//ordemado
        void insert1(int,int);
        void remove(int);
        void print();
};
#endif
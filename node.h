#ifndef NODE_H
#define NODE_H

#include<iostream>
using namespace std;
class Node{
    public:
        Node();
        Node(int);
        ~Node();
 
        Node *next;
        int  elem; 

        int  acceso_elem();
        void modificacion(int);
};

#endif
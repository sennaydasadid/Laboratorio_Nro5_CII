#include "node.h"

Node::Node(){
    elem =0;
    next =NULL;
}
Node::Node(int elem){
    this->elem=elem;
    next = NULL;
}

int  Node::acceso_elem(){
    return elem;
}
void Node::modificacion(int elem){
    this->elem=elem;
}
Node::~Node(){
    delete next;
}
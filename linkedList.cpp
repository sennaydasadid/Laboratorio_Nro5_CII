#include "linkedlist.h"
using namespace std;


LinkedList::LinkedList(){
    size=0;
    head=NULL;
}
void LinkedList::insert(int new_elem){
    Node *n_node=new Node (new_elem);
    Node *temp=head;

    if(!head){
        head=n_node;
    }
    else{
        if(head->elem >new_elem){
            n_node->next=head;
            head=n_node;
        }
        else{
            while((temp->next != NULL) && (temp->next->elem <new_elem)){
                temp=temp->next;
            }
            n_node->next=temp->next;
            temp->next=n_node;
        }
    }
    size++;   
}
void LinkedList::insert1(int pos, int val){
    Node *n_node=new Node(val);
    if (pos==1){
        n_node->next=this->head;
        this->head=n_node;
    }
    pos--;
    Node *ptr=this->head;
    while(ptr!=NULL && --pos){
        ptr=ptr->next;
    }
    n_node->next=ptr->next;
    ptr->next=n_node;
}
void LinkedList::remove(int dig){
    if(dig== 0){
        head = head->next;
    }
    else{
        Node *temp=head;
        for (int i=1;temp!=NULL;i++){
            if( i== dig){
                Node *n;
                temp->next =temp->next->next;
                break;
            }
            temp=temp->next;
        }
    }
}
void LinkedList:: print(){
    Node *temp=this->head;
    if(!head){
        cout<<"La lisya esta vacia "<<endl;
    }
    else{
        while (temp!=NULL)
        {
            cout<<temp->elem<<" ";
            temp=temp->next;
        }
        cout<<endl;
        
    }
    system("pause");
}
LinkedList::~LinkedList(){
    Node *ptr=this->head;
    Node *next=NULL;
    while (ptr!=NULL){
        next=ptr->next;
        delete(ptr);
        ptr=next;
    }
}
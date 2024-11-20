#include "shop.h"
#include "bugatti.h"

Node::Node(item* d){
    this->data = d;
    this->next = nullptr;

}
Node::~Node(){}

List::List(){
    head = nullptr;
}
List::~List(){
    Node *temp;
    while(temp!=nullptr){
        temp = head;
        head = head->next;
        delete temp;
    }
}

void List::insertFirst(item* data){
    Node*newNode=new Node(data);
    newNode->next = head;
    head = newNode;
}

void List::showitems(){
    Node* temp = this->head;
    while(temp!=NULL){
        temp->data->info();
        temp=temp->next;
    }
}



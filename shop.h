#ifndef SHOP_H
#define SHOP_H 
#include"bugatti.h"
#include <iostream>
using namespace std;


class Node{
    friend class List;
    item* data;
    Node* next;
    public:
        Node(item*);
        ~Node();
};


class List{
    Node* head = NULL;
    public:
        List();
        ~List();
        void insertFirst (item* data);
        void showitems();
};



#endif
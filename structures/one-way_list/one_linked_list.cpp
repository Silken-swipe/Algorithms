#include <iostream>
#include <string>

namespace OWlist{
    class Node{
    public:
        double data;
        Node* next;
    public:
        Node(double data) { 
            this->data = data;
            this->next = NULL;
        }
    }; 
    class List{
    public:
        List(){
            this->head = this->tail = NULL;

        }
        Node* head, *tail;
        void pop_front();
        ~List(){
            while (head != NULL) {
                pop_front();
            } 
            Node *node = head;
            head = node ->next;
            delete node;
        }
        void push_back(double);
        void push_front(double data);
        void pop_back();
        Node * getAt(int k);
        void insert();

    };
    
}

void OWlist::List::pop_front(){
    if (head == NULL) return;
    if (head == tail){
        delete tail; head = tail = NULL; return; 
        }
}
void OWlist::List::push_back(double data){
    Node *node = new  Node(data);
    if(head == NULL){
        head = node;
    }
    if(tail != NULL){
        tail->next = node;
        tail = node;
    } 
}
void OWlist::List::push_front(double data){
    Node* node = new Node(data);
    node -> next = head;
    head = node;
    if (tail == NULL) tail = node;
}
void OWlist::List::pop_back(){

}


int main(){
    
    OWlist::List list;
    list.push_back(1123);
    list.push_front(1234);
    return 0;
}


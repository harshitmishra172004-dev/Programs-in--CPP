#include<iostream>
using namespace std;

struct Node{
    int value;
    Node *next;
};
 Node *head =NULL;
void insert_at_first( int value){
    Node *ptr =new Node();
    ptr -> value = value;
    ptr->next = head;
    head = ptr;
}

int main(){
    Node * first = new Node();
    Node * second =  new Node();
    Node * third = new Node();
    first->value = 10;
    second->value = 20;
    third->value = 30;
    first->next = second;
    second->next = third;
    third->next = NULL;
    head = first;
    insert_at_first(5);
    Node *temp = ::head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp= temp->next;
    }
    return 0;
}

#include<iostream> 
using namespace std;

struct Node{
   int value;
   Node *next;
};

int main(){
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->value = 10;
    head->next = second;

    second->value = 20;
    second->next =third;

    third->value =30;
    third->next = NULL;

    Node *temp = head;

    while(temp!= NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    return 0;
}
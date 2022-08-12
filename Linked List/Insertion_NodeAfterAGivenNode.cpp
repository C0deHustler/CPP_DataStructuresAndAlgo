#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void print(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

void InsertAfter(Node*previous, int newdata){
    //1.Check if previous node is NULL.
    if(previous == NULL){
        cout<<"Previous cannot be NULL."<<endl;
    }
    //2.Prepare a newNode.
    Node* newNode = new Node();
    newNode->data = newdata;
    //3.Insert newNode after previous node
    newNode->next = previous->next; //Proper explanation in notes.
    previous->next = newNode;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 2;
    second->data = 4;
    third->data = 6;

    head->next = second;
    second->next = third;
    third->next = NULL;

    InsertAfter(second, 54);// we will insert 54 after "second" i.e. previous node

    print(head);
    return 0;

}
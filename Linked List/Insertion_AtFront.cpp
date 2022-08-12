#include<iostream>
using namespace std;

class Node{
public:
    int Data;
    Node* Next;
};

void InsertAtTheFront(Node**head, int NewData){ //since we're passing address of our head node, we need to recieve parameters from main function inside this function, 
                                                //since we're passing the address of a pointer, so we need to recieve a pointer to a pointer, so we'll make a node called "Node" recieving pointer to pointer with the help of "**"
                                                // NewData will store the Data for new node
    // 1. Prepare a newNode
    Node* newNode = new Node();
    newNode->Data = NewData; //Allotment of Data to the newNode as passed by the user from the main function
    // 2. Put it in front of current head
    newNode->Next = *head; // newNode will link to our head node pointer
                           // we're assigning pointer to a pointer that's why "*head"
    // 3. Move head of the linked list to point to the newNode
    *head = newNode; // *head is a pointer and newNode is also a pointer so this will work
}

void print(Node* n){
    while(n!=NULL){
        cout<<n->Data<<" ";
        n = n->Next;
    }
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Data = 2;
    second->Data = 4;
    third->Data = 6;

    head->Next = second;
    second->Next = third;
    third->Next = NULL;

    InsertAtTheFront(&head, -2); //&head = address of the head pointer, -2 = Data to be stored in the new node
    InsertAtTheFront(&head, -4);
    print(head);

    return 0;
}
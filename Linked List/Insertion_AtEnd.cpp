#include<iostream>
using namespace std;

class Node{
public:
    int Data;
    Node* Next;
};

void print(Node* n){
    while(n!=NULL){
        cout<<n->Data<<" ";
        n = n->Next;
    }
}

void InsertAtTheEnd(Node**head, int NewData){

    //1. Prepare a newNode
    Node* newNode = new Node();
    newNode->Data = NewData;
    newNode->Next = NULL;

    //2. If linked list is empty, newNode will be a head node
    if(*head == NULL){     // if current head pointer is equal to null, then it means list is empty
        *head == newNode;  // and newNode will become the head of the list
        return;            // in this case, the newNode will act as the only member of the list 
    }

    // if the linked list is not empty, then
    //3. Find the last node       (For Eg. In order to find 3rd node, we need to reach 2nd node, and in order to reach 2nd node, we need to reach 1st node, and in order to reach 1st node, we need to know the address of head node)
    //                            ( Similarly, we'll create a "last" node pointer and it will initially hold the same address as head node pointer. )
    Node* last = *head;           // creation of a new "last" node which will initially point to the head of the linked list
    while(last->Next != NULL){    // Loop will work until our last node will not reach NULL i.e actual last node of the linked list
        last = last->Next;        // and till then, our self initialized "last" node will keep moving forward to the actual last node and,
                                  // it will keep accessing the addresses of the upcoming next nodes which will come in it's way to reach the actual last node
    }

    //4. Insert newNode after last node (at the end)
    last->Next = newNode;         // now we've finally reached our actual last node, 
                                  // so we'll make our self created "last" node equal to the "newNode" which we want to 
                                  //get alloted at the end of the linked list. 
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

    InsertAtTheEnd(&head, 8);
    InsertAtTheEnd(&head, 10);
    print(head);
}

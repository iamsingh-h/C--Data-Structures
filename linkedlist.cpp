#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node *next;
    
    //constructor
    Node(int data){
        this->data = data;
        next = NULL;
    }
    //destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};


void InsertAtHead(Node* &head,int d){
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
    
}

void InsertAtTail(Node* &tail,int d){
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    
}
void InsertAtPosition(Node * &tail,Node * &head,int position,int d){
    
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    
    Node *temp = head;
    int cnt = 1;
    
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    
    //inserting at tail
    if(temp->next == NULL){
        InsertAtTail(tail,d);
    }
    
    
    //creating node for d
    
    Node *nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    
}

void deleteNode(Node* &head,int position){
    if(position == 1){
        Node*temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;
        
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
    
}



void print(Node*head){
    Node*temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



int main()
{
    Node *n1 = new Node(10);
    
    Node *head = n1;
    Node *tail = n1;
    print(head);
    InsertAtHead(head,12);
    print(head);
    InsertAtHead(head,13);
    print(head);
    InsertAtTail(tail,25);
    print(head);
    InsertAtTail(tail,29);
    print(head);
    InsertAtPosition(tail,head,1,22);
    print(head);
    InsertAtPosition(tail,head,4,43);
    print(head);
    InsertAtPosition(tail,head,7,23);
    print(head);
    deleteNode(head,4);
    print(head);
    deleteNode(head,7);
    print(head);
    
    
    
    
}

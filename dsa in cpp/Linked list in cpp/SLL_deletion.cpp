/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<map>


using namespace std;

class Node{
    public:
        int data;
        Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
            
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};

void insertatHead(Node* &head,int value){
    Node * temp = new Node(value);
    temp->next = head;
    head = temp;
}

void insertatTail(Node* &tail,int value){
    Node * temp = new Node(value);
    tail->next = temp;
    tail=temp;
}

void insertatAnyPosition(Node* &head,Node* &tail, int position,int value){
    if(position == 1){
        insertatHead(head ,value);
        return;
    }
    
    Node* temp = head;
    int counter = 1;
     while(counter < position - 1){
         temp = temp->next;
         counter++;
     }
     if(temp->next == NULL){
         insertatTail(tail,value);
         return;
     }
     Node* nodeToInsert = new Node(value);
     nodeToInsert->next = temp->next;
     temp->next = nodeToInsert;
     
    
    
}

void print(Node* &head){
    Node* temp = head;
    if(head == NULL){
        cout<<"List is empty"<<endl;
    }
    
    else{
        cout<<"linked list is.."<<endl;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
            
        }
        
    }
    cout<<endl;
    
}

void deletion(Node* &head,int position){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int counter = 1;
        while(counter < position){
            prev = curr;
            curr = curr->next;
            counter++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
    
}
void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}



int main()
{
    Node* n1 = new Node(11);
    Node* head = n1;
    Node* tail = n1;
    
    insertatHead(head,88);
    insertatTail(tail,55);
    insertatAnyPosition(head,tail,2,99);
    insertatAnyPosition(head,tail,2,99);
    // deletion(head,99);
    deleteNode(2,head);
    
    insertatTail(tail,55);

    print(head);
    return 0;
}

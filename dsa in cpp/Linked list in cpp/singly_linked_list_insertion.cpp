/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
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

int main()
{
    Node* n1 = new Node(11);
    Node* head = n1;
    Node* tail = n1;
    
    insertatHead(head,88);
    insertatTail(tail,55);
    insertatAnyPosition(head,tail,1,99);

    print(head);
    return 0;
}

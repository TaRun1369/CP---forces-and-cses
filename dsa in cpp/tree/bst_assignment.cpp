#include<iostream>
using namespace std;

class Node{
    string word;
    string meaning;
    Node* lchild,*rchild;

    public:
    Node(){
        word="";
        meaning = "";
        lchild=rchild=NULL;

    }
    Node(string w,string m){
        word = w;
        meaning = m;
        lchild=rchild=NULL;
    }
  
    friend class BST;
};


class BST{
    public:
    Node* root;
    BST(){
        root = NULL;
    }

    void insert(string w,string m);
    void displayAsc(Node* temp);
    void displayDes(Node* temp);
    void search(string w);
    void update(string w,string m);
    void search2(string w,Node* &curr,Node* &parent);
    void Delete(string key);
    void delete2(Node* curr,Node* parent);
};

void BST :: insert(string w,string m){
    Node* newNode = new Node(w,m);
    if(root == NULL){
        root = newNode;
    }
    else{
        Node* curr = root;
        Node* parent = NULL;
        while(curr!=NULL){
            parent = curr;
            if(curr->word>w){
                curr = curr->lchild;
            }
            else{
                curr=curr->rchild;
            }

        }
        if(parent->word>w){
            parent->lchild = newNode;
        }
        else{
            parent->rchild=newNode;
        }

    }
}

void BST :: displayAsc(Node* temp){
    if(temp!=NULL){
        displayAsc(temp->lchild);
        cout<<temp->word<<": "<<temp->meaning<<endl;
        displayAsc(temp->rchild);
    }
}

void BST :: displayDes(Node* temp){
    if(temp!=NULL){
        displayDes(temp->rchild);
        cout<<temp->word<<": "<<temp->meaning<<endl;
        displayDes(temp->lchild);
    }
}

void BST:: search(string w){
    Node* temp = root;
    int count = 0;
    while (temp!=NULL)
    {
      if(temp->word == w){
        cout<<"the word is present !!!!!!!!"<<endl;
        cout<<"Number of comparisons is: "<<count<<endl;
        return;
    }
    else if(temp->word>w){
        temp=temp->lchild;
    }
    else{
        temp=temp->rchild;        
    }
    }
    cout<<"word is not present !!!!!"<<endl;
}

void BST::update(string w,string m){
    Node* temp = root;
    while(temp!=NULL){
        if(temp->word==w){
            temp->meaning=m;
            cout<<"meaning is updated !!!"<<endl;
            return;
        }
        else if(temp->word>w){
            temp=temp->lchild;
        }
        else{
            temp = temp->rchild;
        }
    }
    cout<<"Word not found !!"<<endl;
}

void BST :: search2(string key,Node* &curr,Node* &parent ){
    int count = 0;
    while(curr!=NULL){
        count++;
        if(key == curr->word){
            return;
        }
        else if(key<curr->word){
            parent=curr;
            curr = curr->lchild;
        }
        else{
            parent = curr;
            curr = curr->rchild;
        }
    }
    return;
}


void BST::Delete(string key)
{
	Node* curr=root;
	Node* parent=NULL;
	search2(key,curr,parent);
	delete2(curr,parent);
}



void BST::delete2(Node* curr,Node* parent)
{	
	// Node* child=NULL;
	if(curr==NULL)
	{
		cout<<"The key is not present in BST !!"<<endl;
		return;
	}
	else
	{
		if(curr->lchild!=NULL && curr->rchild!=NULL)
		{
			Node* temp=curr->rchild;      //Inorder successor of current
			Node* parent2=curr;
			while(temp->lchild!=NULL)
			{	
				parent2=temp;
				temp=temp->lchild;
			}
			curr->word=temp->word;
			curr->meaning=temp->meaning;
			delete2(temp,parent2);
		}
		else if(curr->lchild!=NULL && curr->rchild==NULL)
		{
			Node* child=curr->lchild;
			if(parent->lchild==curr)
				parent->lchild=child;
			else
				parent->rchild=child;
		}
		else if(curr->lchild==NULL && curr->rchild!=NULL)
		{
			Node* child=curr->rchild;
			if(parent->lchild==curr)
				parent->lchild=child;
			else
				parent->rchild=child;
		}
		else
		{
			if(parent->lchild==curr)
				parent->lchild=NULL;
			else
				parent->rchild=NULL;
			delete(curr);
		}
	}
}




int main() {
	BST obj1;	
	int choice;
	int flag=1;
	while(flag)
	{
	cout<<"1.display \n2.Insert \n3.update \n4.delete \n5.search\n";
	cout<<"\nEnter your choice: ";
	cin>>choice;
	switch(choice)
	{
	case 1:
	{
	cout<<"Ascending ordered display: "<<endl;
	obj1.displayAsc(obj1.root);
	break;
	}
	case 2:
	{
		string w,m;
		cout<<"Enter the word: ";
		cin>>w;
		cout<<"Enter the meaning: ";
		cin>>m;
		obj1.insert(w,m);
		break;
	}
	case 3:
	{
		string w,m;
		cout<<"Enter the word: ";	
		cin>>w;
		cout<<"\nEnter the meaning: ";
		cin>>m;
		obj1.update(w,m);
		break;
	}
	case 4:
	{
		string w;
		cout<<"Enter the word to be deleted: ";
		cin>>w;
		obj1.Delete(w);
		break;
	}
	case 5:
	{
		string w;
		cout<<"Enter the word: ";
		cin>>w;
		obj1.search(w);
		break;
	}
	
	}
	cout<<"Do you want to continue(1 for yes and 0 for no)"<<endl;
	cin>>flag;
	}
	return 0;
}
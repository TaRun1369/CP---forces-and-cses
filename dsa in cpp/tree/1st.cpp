#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"ENTER DATA for inserting in left "<< data <<endl;
    root->left = buildTree(root->left);
    cout<<"ENTER DATA for inserting in right of "<< data <<endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp =q.front();
        
        q.pop();

        if(temp == NULL){
            //purana level is completely  traversed
            cout<<endl;
            if(!q.empty()){
                // if queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            // agar temp->left == non null
                q.push(temp->left);
            }
            if(temp->right){
            // agar temp->right == non null
                q.push(temp->right);
            }
        }
       

    }
}

void inorder(node* root){
    //base case == kuch nhi hai
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    //base case == kuch nhi hai
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    //base case == kuch nhi hai
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildfromLevelOrder(node* &root){
    // level order matlab queue
    queue<node*> q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;

        int leftdata;
        cin>>leftdata;

        if(leftdata != -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
             
        }

        cout<<"Enter right node for "<<temp->data<<endl;

        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
             
        }
        /* code */
    }
    
}


int main(){
    node* root = NULL;
    buildfromLevelOrder(root);
    levelOrderTraversal(root);
    //  root = buildTree(root);
    // cout<<"level order "<<endl;
    //  levelOrderTraversal(root);

    //  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // cout<<"inorder"<<endl;
    //  inorder(root);
    //  cout<<"pre"<<endl;
    //  preorder(root);
    //  cout<<"post"<<endl;
    //  postorder(root);
}
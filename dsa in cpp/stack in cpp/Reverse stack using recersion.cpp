/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Reversing a stack using recursion
#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int n){
    if(s.empty()){
        s.push(n);
        return;
    }
    int n1 = s.top();
    s.pop();
    
    insertAtBottom(s,n);
    s.push(n1);
}
void reverseStack(stack<int> &stack){
    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();
     
    reverseStack(stack);
    
    insertAtBottom(stack,num);
}

int main()
{
    stack<int> s;
    s.push(9);
    s.push(7);
    s.push(0);
    s.push(5);
    
    reverseStack(s);
    
    for(int i;i<5;i++){
        int s1 = s.top();
        s.pop();
        cout<<s1<<" ";
    }
    return 0;
}

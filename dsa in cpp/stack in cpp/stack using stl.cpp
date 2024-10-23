/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stack>
using namespace std;

int main()
{
    // creation of stack
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"top element is "<<s.top()<<endl;
    
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    
    cout<<"Size of stack is "<<s.size()<<endl;
    return 0;
}

// Insert an element at its bottom in a given stack
//

#include <iostream>
#include <stack>
using namespace std;

void insertatbottom(stack<int> &l ,int n){
    if(l.empty()){
        l.push(n);
        return;
    }
    int num = l.top();
    l.pop();
    
    insertatbottom(l,n);
    l.push(num);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(4);
    s.push(2);
    insertatbottom(s,7);
    
    for(int i = 0;i<5;i++){
        
        cout<<s.top()<<endl;
        s.pop();
    }
    
    

    
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Sort a Stack
#include <iostream>
#include<stack>
using namespace std;

//nikalte wAQT NORMAL JAB WAPAS JAYENGE TAB SORTED WAY MEIN INSERT

//hOW TO INSERT IN SORTED MANNER.
void insertsortedmanner(stack<int> &s,int n){
    
    if(s.empty()||(!s.empty() && s.top()<n)){
        s.push(n);
        return;
    }
    int n2 =s.top();
    s.pop();
    insertsortedmanner(s,n);
    s.push(n2);
}

void sortt(stack<int> &s){
    if(s.empty()){
        return;
    }
    int np = s.top();
    s.pop();
    
    sortt(s);
    
    insertsortedmanner(s,np);
    
}

int main()
{
    stack<int> s;
    s.push(9);
    s.push(7);
    s.push(0);
    s.push(5);
    sortt(s);
    for(int i=0;i<4;i++){
        int s1 = s.top();
        s.pop();
        cout<<s1<<" ";
    }
    
    
    // for(int i=0;i<4;i++){
    //     int s1 = s.top();
    //     s.pop();
    //     cout<<s1<<" ";
    // }
    return 0;
}

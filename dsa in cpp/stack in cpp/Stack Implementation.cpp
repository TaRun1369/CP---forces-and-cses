/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Stack{
  public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size = size;
        this->arr = new int[size];
        top = -1;
    }
    
    void push(int ele){
        if(size-top > 1){
            top++;
            arr[top] = ele;
        }
        else{
            cout<<"Stack overflowed"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            cout<<"popped element is "<<arr[top]<<endl;
            top--;
        }
        else{
            cout<<"Stack underflow "<<endl;
            
        }
    }
    bool isempty(){
        if(top == -1){
            return true;
        } 
        else{
            return false;
        }
    }
    int peek(){
        if(top >=0 && top < size){
        return arr[top];
        }
        else{
            cout<<"no one present"<<endl;
            return -1;
        }
    }
    
    
    
    
};
int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(88);
    st.push(91);
    st.push(21);
    st.push(100);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    
    
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Design a data structure. which represents two stacks using only one common both
// stacks. The data Structure should support the following operations:

#include <iostream>

using namespace std;

// arr ke stack se ek stack arr ke end se ek stack

class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;
  public:
    TwoStack(int s){
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    void push1(int num){
        // atleast a empty space is present
        if(top2 - top1 >1){
            top1++;
            arr[top1] = num;
        }
        else{
            cout<<"Stack overflowed"<<endl;
        }
    }
    void push2(int num){
        if(top2 - top1 >1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout<<"Stack overflowed"<<endl;
        }
    }
    
    int pop1(){
        int ans;
        if(top1 >= 0){
            ans = arr[top1];
            top1--;
        }
        else{
            ans = -1;
        }
        return ans;
    }
    int pop2(){
        int ans;
        if(top2 < size){
            ans = arr[top2];
            top2++;
        }
        else{
            ans = -1;
        }
        return ans;
    }
     
}; 

int main()
{
    return 0;
}

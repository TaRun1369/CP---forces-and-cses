// // dsa series babbar video no. 55
// // https://www.youtube.com/watch?v=BmZnJehDzyU&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=61
// // 16 min pe

// // run nhi ho raha

// #include <iostream>
// #include <stack>
// using namespace std;
// // delete middle element from stack

// // using recusion

// void solve(stack<int> &inputStack,int count,int size){
//     if(count == size/2){
//         inputStack.pop();
//         return;
//     }
    
//     int num = inputStack.top();
//     inputStack.pop();
    
//     //recursive call
//     solve(inputStack,count + 1,size);
    
//     inputStack.push(num);
    
// }

// void deletemiddle(stack<int>&inputStack , int N){
//     int count = 0;
//     solve(inputStack,count,N);
// }

// int main()
// {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.push(6);
    
//     deletemiddle(s,6);
//     for(int i = 0;i<5;i++){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
    
    
//     return 0;
// }
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

void solve(stack<int> &inputStack,int count,int size){
    if(count == size/2){
        inputStack.pop();
        return;
    }
    
    int num = inputStack.top();
    inputStack.pop();
    
    //recursive call
    solve(inputStack,count + 1,size);
    
    inputStack.push(num);
    
}

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int count = 0;
        solve(s,count,sizeOfStack);
        
        // code here.. 
    }
};
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Reverse a String Using Stack
#include <iostream>
#include<stack>
//ye toh stack ka application he hai
using namespace std;

int main()
{
    string str = "adval";
    
    stack<char> s;
    
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        
        s.pop();
    }
    cout<<"Reversed string is "<<ans;
    
    
    return 0;
}

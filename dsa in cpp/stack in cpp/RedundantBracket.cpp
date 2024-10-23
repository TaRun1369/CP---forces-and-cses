/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Redundant bracket - useless braclet
// ex - ((a+b)) - last bracket is redundunt  
#include <iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &s){
    stack<char> st;
    for(int i =0;i<s.length();i++){
        char ch = s[i];
        
        if(ch == '('||ch == '+' ||ch == '-' ||ch == '/' ||ch == '*'){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool isRedundant = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' ||top == '-' ||top == '/' ||top == '*'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant == true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string s = "(a+F)";
    
    bool l = findRedundantBrackets(s);
    // for(int i=0;i<4;i++){
    //     int s1 = s.top();
    //     s.pop();
    //     cout<<s1<<" ";
    // }
    cout<<l<<endl;
    return 0;
}

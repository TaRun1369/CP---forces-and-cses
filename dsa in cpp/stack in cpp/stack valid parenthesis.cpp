// Valid parenthisis que 


#include <iostream>
#include <stack>
using namespace std;

bool matches(char top,char ch){
    if(top == '{' && ch == '}'){
        return true;    
    }
    if(top == '[' && ch == ']'){
        return true;    
    }
    if(top == '(' && ch == ')'){
        return true;    
    }
    return false;
}


bool isValid(string exp){
    stack<char> s;
    for(int i = 0;i<exp.length();i++){
        char ch = exp[i];
        
        if( ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top = s.top();
                if(matches(top,ch)){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
                
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    string exp = "{}[]()";
    cout<<isValid(exp);
    

    return 0;
}

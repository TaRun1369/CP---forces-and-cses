
// Minimum cost required to make string valid
// matlab {{}}}{ ye valid nhi hai ismein kitne char ko reverse kare ki 
// string valid ho jaaye...

// condition
//1 no. of open = no. of close
// i.e. even no. of brackets
//every close bracket should have a clos brcket before it


#include <iostream>
#include<stack>
using namespace std;

int findMinBracketsReversed(string s){
    if(s.length()%2==1){
        return -1;
    }
    stack<char> ss;
    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        if(ch == '{'){
            ss.push(ch);
        }
        else{
            //ch is closed brace
            if(!ss.empty() && ss.top() == '{'){
                ss.pop();
            }
            else{
                  ss.push(ch);
            }
            
        }
    }
        int a = 0,b=0;
        while(!ss.empty()){
            if(ss.top() == '{'){
                b++;
            }
            else{
                a++;
            }
            ss.pop();
        }
        int ans = (a+1)/2 + (b+1)/2;
        return ans;
}

int main()
{
    string s = "{{{}}}}}{{";
    
    int l = findMinBracketsReversed(s);
    // for(int i=0;i<4;i++){
    //     int s1 = s.top();
    //     s.pop();
    //     cout<<s1<<" ";
    // }
    cout<<l<<endl;
    return 0;
}

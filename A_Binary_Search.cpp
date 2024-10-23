#include <bits/stdc++.h>
using namespace std;

long long main() {
    string s;
    cin >> s;
    long long n = s.length();

    long long count = 0;

    stack<char> st;
    for(auto it : s){
        if(it == 'a'){
            if(!st.empty() && st.top() != 'c'){
                if(st.top() == 'a') count+=2;
                else count += 1;
            }
            
                st.push(it);
            
        }
        else if(it == 'b'){
            if(!st.empty() && st.top() != 'a'){
                if(st.top() == 'b') count += 2;
                else count += 1;
            }
            else if(st.empty()){
                count++;
            }
            st.push(it);
        }
        else{
            if(st.empty()) {
                count+=2;
            }
            else{
                if(st.top() == 'a') count+=1;
                else if(st.top() == 'c') count+=2;
            }
            st.push(it);

        }
        // cout<<it<<" ispe count "<<count<<endl;
    }
    if(!st.empty()){
        if(st.top() == 'a')count+=2;
        if(st.top() == 'b')count+=1;
    }
    cout << count << endl;
    return 0;
}

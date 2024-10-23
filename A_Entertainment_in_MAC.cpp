#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long t;
    cin>>t;
    string s;
    cin>>s;
    
    if(s[0] > s[s.size() - 1]){
            string temp = s;
            reverse(temp.begin(), temp.end());
            cout<<temp<<s<<endl;
        }
        else if(s[0] == s[s.size() - 1]){
            long long i = 0, j = s.size() - 1;
            while(s[i] == s[j] && i < j){
                i++;
                j--;
            }
            if(s[i] > s[j]){
            string temp = s;
            reverse(temp.begin(), temp.end());
            cout<<temp<<s<<endl;
            }
            else{
            cout<<s<<endl;
        }

        }
        else{
            cout<<s<<endl;
        }
   }

}

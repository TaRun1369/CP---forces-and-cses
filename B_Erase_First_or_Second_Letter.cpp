#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
//  void recur(string s, set<string> &se){
//     if(s.size()<= 0 ){
//         return;
//     }
    
//             se.insert(s);
//             // remove first character
//             string sub1 = s.substr(1,s.size()-1);
//             // se.insert(sub1);
//             recur(sub1,se);

//             // remove second character
//             if(s.size()>= 2){
//             string sub2 = s[0] + s.substr(2,s.size()-2);
//             // se.insert(sub2);
//             recur(sub2,se);
//             }

        

//  }
 
long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
        // long long flag = 0; // 0 banega 
        string s;
        cin >> s;
        long long ans = 0;
        vector<long long> v(26,0);
        for(long long i=0;i<n;i++){
            if(v[s[i]-'a'] == 0){
                ans += (n-i);
            }
            v[s[i]-'a'] = 1;
        }


       cout<<ans<<endl;
 
    }
    return 0;
}

// // #include <bits/stdc++.h>
// // using namespace std;

// // // unordered_map<char, long long> mp;

// // // void initializePhoneDialPadMap() {
// // //     mp['a'] = mp['b']  = 1;
// // //     mp['d'] = mp['e'] = mp['c'] = 2;
// // //     mp['g'] = mp['h'] = mp['f'] = 3;
// // //     mp['j'] = mp['k'] = mp['i'] = 4;
// // //     mp['m'] = mp['n'] = mp['l'] = 5;
// // //     mp['p'] = mp['q'] = mp['o']  = 6;
// // //     mp['t'] = mp['s'] = mp['r'] = 7;
// // //     mp['w'] = mp['u'] = mp['v'] = 8; 
// // //     mp['x'] = mp['y'] = mp['z'] = 9;
// // // }

// // // long long traverseSubstringsAndCalculateSum(string& str) {
// // //     long long ans = 0;
// // //     long long n = str.length();
    
// // //     for (long long i = 0; i < n; ++i) {
// // //         long long sum = 0;
// // //         for (long long j = i; j < n; ++j) {
// // //             sum += mp[str[j]];
// // //             if (sum % (j - i + 1) == 0) ans++;
// // //         }
// // //     }
    
// // //     return ans;
// // // }


// // // unordered_set<string>st;

// // // void recur(string &curr,string s,long long ind){
// // //     if(ind == s.size()){
// // //         st.insert(curr);
// // //         return;
// // //     }

// // //     st.insert(curr);

// // //     for(long long i = ind;i < s.size();i++){
// // //         curr.push_back(s[i]);
// // //         recur(curr,s,i);
// // //         curr.pop_back();
// // //     }

// // // }

// // long long main() {
// //     initializePhoneDialPadMap();

// //     string s;
// //     cin >> s;
// //     cout << traverseSubstringsAndCalculateSum(s) << endl;
// // //     string curr = "";
// // //     recur(curr,s,0);

// // // cout<<st.size()<<endl;
    
// // //     return 0;
// // }

// #include <iostream>
// #include <unordered_set>
// #include <string>

// using namespace std;

// unordered_set<string> st;

// void recur(string &curr, string s, long long ind) {
//     if (ind == s.size()) {
//         st.insert(curr);
//         return;
//     }

//     recur(curr, s, ind + 1);

//     curr.push_back(s[ind]);
//     st.insert(curr); 
//     recur(curr, s, ind + 1);
//     curr.pop_back(); 
// }

// long long main() {
//     string s;
//     cin >> s;

//     string curr = "";
//     recur(curr, s, 0);

//     // cout << st.size() << endl;
//     for(auto it : st)cout<<it<<endl;
    
//     return 0;
// }

#include <iostream>
#include <unordered_set>
#include <string>
#include <cstdlib> 

using namespace std;

unordered_set<long long> st;

void recur(string &curr, string s, long long ind) {
    if (ind == s.size()) {
        if (!curr.empty()) {
            try {
                long long value = stoi(curr);
                st.insert(value);
            } catch (const invalid_argument&) {
                
            }
        }
        return;
    }


    recur(curr, s, ind + 1);


    curr.push_back(s[ind]);
    recur(curr, s, ind + 1);
    curr.pop_back(); 
}

long long main() {
    string s;
    cin >> s;

    string curr = "";
    recur(curr, s, 0);

    cout << st.size() << endl;
    
    return 0;
}

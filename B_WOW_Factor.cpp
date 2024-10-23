    // #include <bits/stdc++.h>
    // #include <string>
    // #include <algorithm>
    // using namespace std;
 
    // long long recur(string s, long long ind,long long v){
    //     if(v == 5) return 1;
    //     if(ind == s.size()) return 0;
    //     long long take = 0,nottake = 0;

    //     if(v == 0 || v == 3){
    //         take = recur(s,ind+1,v+1);
    //         nottake = recur(s,ind+1,v);
    //     }
    //     else if(v == 2){
    //         if(s[ind] == 'o'){
    //             take = recur(s,ind+1,v+1);
    //         }
    //         nottake = recur(s,ind+1,v);
    //     }
    //     else{
    //         if(s[ind] == 'v'){
    //             take = recur(s,ind+1,v+1);
    //         }
    //         nottake = recur(s,ind+1,v);
    //     }

    //     return take + nottake;
    // }
    // long long main() {
    //     string s;
    //     cin>>s;
    //     return recur(s,0,0);
    
    // }


#include <bits/stdc++.h>
using namespace std;

long long recur(string &s, long long ind, long long v,vector<vector<long long>> &dp) {
    if (v == 5) return 1;
    if (ind == s.size()) return 0;
    long long take = 0, nottake = 0;

    // if (v == 0 || v == 3) {

    //     take = recur(s, ind + 1, v + 1);
    //     nottake = recur(s, ind + 1, v);
    if(dp[ind][v] != -1) return dp[ind][v];
     if (v == 2) {
        if (s[ind] == 'o') {
            take = recur(s, ind + 1, v + 1,dp);
        }
        nottake = recur(s, ind + 1, v,dp);
    } else {
        if(ind+1 < s.size() && s[ind] == 'v' && s[ind+1] == 'v'){
            take = recur(s,ind+2,v+2,dp);
        }
        nottake = recur(s,ind+1,v,dp);
    }
    // cout<<"ind - "<<ind<<endl;
    // cout<<"data - "<<take+nottake<<endl;
    return dp[ind][v] = take + nottake;
}

long long main() {
    string s;
    cin >> s;
    vector<vector<long long>> dp(s.size(),vector<long long>(6,-1));
    cout << recur(s, 0, 0,dp) << endl;
    return 0;
}

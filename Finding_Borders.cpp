#include<bits/stdc++.h>
using namespace std;
#define long long long long
long long32_t main(){
 string s;
cin>>s;

 long long n = s.size();

 vector<long long> lps(n,0); // longest prefix suffix same array 

 long long i = 1;
 long long len = 0;

 while(i < n){
    if(s[i] == s[len]){
        len++;
        lps[i] = len;
        i++;
    }
    else{
        if(len != 0){
            len = lps[len-1];

        }
        else{
            lps[i] = 0;
            i++;
        }
    }
 }

    // for(auto it : lps){
    //     cout<<it<<endl;
    // }

    long long a = lps[n-1];
    vector<long long>ans;
    while(a != 0){
        // cout<<a<<" ";
        ans.push_back(a);
        a = lps[a - 1];
    }

    sort(ans.begin(),ans.end());
    for(auto it : ans){
        cout<<it<<" ";
    }


}
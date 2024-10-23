#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
 string pattern;
 cin>>pattern;

 long long m = pattern.size();

 vector<long long> lps(m,0); // longest prefix suffix same array 

 long long i = 1;
 long long len = 0;

 while(i < m){
    if(pattern[i] == pattern[len]){
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


 for(auto it : lps){
    cout<<it<<" ";
 }
 cout<<endl;
}
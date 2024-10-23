#include<bits/stdc++.h>
using namespace std;
#define long long long long
long long32_t main(){
 string s;
 cin>>s;
 string pattern;
 cin>>pattern;

 long long m = pattern.size();
 long long n = s.size();

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


 long long cnt=  0;
 i = 0;long long j= 0 ;
 while(n - i >= m-j){
    if(s[i] == pattern[j]){
        i++;
        j++;
        if(j == m){
            cnt++;
            j = lps[j-1];
        }

    }
    else if(i < n && pattern[j] != s[i]){
        if(j != 0){
            j = lps[j-1];
        }
        else {
            i++;
        }
    }
 }

 cout<<cnt<<endl;
}
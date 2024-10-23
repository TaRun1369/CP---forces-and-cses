#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
 string s;
 cin>>s;
 int k;
 cin>>k;
long long n = s.size();

for(int ind = 0;ind<k;ind++){
    int f = 0;

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

    long long cnt=  0;
 i = 0;long long j= 0 ;
 while(n - i >= m-j){
    if(s[i] == pattern[j]){
        i++;
        j++;
        if(j == m){
            f = 1;
            break;
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

 if( f == 1) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 }


}

 
 
}
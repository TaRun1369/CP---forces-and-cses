#include<bits/stdc++.h>

using namespace std;

long long main(){
    string s;
    cin>>s;
    long long i = 1;
    long long ans = 1;
    while(i < s.size()){
        long long c = 1;

        while(s[i] == s[i-1]){
            i++;
            c++;
        }
        ans = max(ans,c);
        i++;
    }
    if(s.size() == 0) cout<<0<<endl;
    else
    cout<<ans<<endl;
}
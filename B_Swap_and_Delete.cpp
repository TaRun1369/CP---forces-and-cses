#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

long long main() {
    long long t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        long long one = 0,zero = 0;
        for(long long i = 0;i<a.size();i++){
            if(a[i] == '1'){
                one++;  
            }
            else{
                zero++; 
            }
        }
        // cout<<"one "<<one<<" zero "<<zero<<endl;
        long long j = 0;
       for(;j<a.size();j++){
        if(a[j] == '1' && zero > 0){
            zero--;
        }
        else if(a[j] == '0' && one > 0){
            one--;
        }
        else{
            break;
        }
       }
        // cout<<j<<endl;
       cout<<a.size() - j<<endl;
    
    }
    return 0;
}

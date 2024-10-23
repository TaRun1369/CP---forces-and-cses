#include<bits/stdc++.h>
using namespace std;

long long getMin(vector<long long> &a){
    long long siz = a.size();
    long long ans = 0;
    for(long long i = 0;i<32;i++){
        long long count  = 0;
        for(auto it : a){
            if((it>>i) & 1){
                count++;
            }
        }
        if(count*2 >= siz){
            ans += siz - count;
        } 
        else {
            ans += count;
        }
    }

    return ans;
}
long long main(){
    long long n;
    cin>>n;

    vector<long long> a(n);
    for(long long i = 0;i<n;i++){
        cin>>a[i];
    }

    cout<<getMin(a)<<endl;
}
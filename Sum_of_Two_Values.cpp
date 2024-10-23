#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    map<int,int> mp;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        // cout<<(a)<<endl;
        
        if(mp.find(k - (a)) != mp.end()) {
            cout<<mp[k - (a)] + 1<<" "<<i+1<<endl;
            return 0;
        }
        if(a < k)
        mp[a] = i;
    }

    cout<<"IMPOSSIBLE"<<endl;
    
}
// 3 - 10 
// 4 - 5 
// 5 - 6
// 7 - 16
// 10 - 11
// 12 - 13
// 14 - 15


// 10 - 1,1
// 5 - 1,1


// 5 6 10 11 13 15 16
// 4 5 3  10 12 14 7

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    while(n--){
        int a,b;
        cin>>a>>b;
        v.push_back({b,a});
    }

    sort(v.begin(),v.end());
    
    int ans = 0;
    int prev = -1;
    for(auto it : v){
        int end = it.first , start = it.second;
        // cout<<start<<" -start "<<end<<" - end  prev - "<<prev<<endl;
        if(prev > start && prev <= end){
            // nothing
        }
        else{ ans++;prev = end;}
        
    }

    cout<<ans<<endl;
}





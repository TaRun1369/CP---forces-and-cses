// #include<bits/stdc++.h>
// using namespace std;

// long long main(){
//     long n,m;
//     cin>>n>>m;
//     vector<long> arr(n);
//     vector<long> ans(m,-1);
//     set<pair<long,long>>s;

//     for(long i = 0;i<n;i++){
//         cin>>arr[i];
//         s.insert({arr[i],i});
//     }
    

//     long long i = 0;
//     for(long j= 0;j<m;j++){
//         long long x;
//         cin>>x;
//         auto lower = lower_bound(s.begin(),s.end(),{x,0});
//         // cout<<lower<<endl;
//         if(lower.first == x){
//             cout<<x<<endl;
//             s.erase(*lower);
//         }
//         else if(lower == s.begin()){
//             cout<<-1<<endl;
//         }
//         else if(lower.first > x){
//             cout<<*(--lower)<<endl;
//             s.erase(*lower);
//         }
//     }
    

// }
#include<bits/stdc++.h>
using namespace std;

long long main(){
    long n, m;
    cin >> n >> m;
    
    vector<long> arr(n);
    vector<long> ans(m, -1);
    set<pair<long, long>> s;

    for(long i = 0; i < n; i++){
        cin >> arr[i];
        s.insert({arr[i], i});
    }

    for(long j = 0; j < m; j++){
        long x;
        cin >> x;
        
        auto lower = s.lower_bound({x, 0}); // Find the first element >= x
        
        if(lower != s.end() && lower->first == x){
            cout << x << endl;
            s.erase(lower);
        }
        else if(lower == s.begin()){
            cout << -1 << endl;
        }
        else {
            --lower;
            cout << lower->first << endl;
            s.erase(lower);
        }
    }
}

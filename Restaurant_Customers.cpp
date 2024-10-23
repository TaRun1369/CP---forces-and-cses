// #include<bits/stdc++.h>
// using namespace std;
// // long long arr[200001];
// int main(){
//     long long n;
//     cin>>n;
//     vector<pair<long long,long long>> vp;
//     for(long long i = 0;i<n;i++){
//         long long a,b;
//         cin>>a>>b;
//         vp.push_back({a,b});
//     }

//     sort(vp.begin(),vp.end());
//     long long lef = vp[0].first;
//     long long rig = vp[0].second;
//     long long ans = 0;
//     long long curr = 1;
//     for(long long i = 1;i<n;i++){
//         if(vp[i].first >= lef && vp[i].first <= rig){
//             curr++;
//             lef = max(lef,vp[i].first);
//             rig = min(rig,vp[i].second);
//         }
//         else{
//             lef = vp[i].first;
//             rig = vp[i].second;
//             curr = 1;
//         }

//         ans = max(ans,curr);
//     }
//     cout<<ans<<endl;
    
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    vector<long long> start(n), end(n);
    
    for (long long i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }
    
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    
    long long ans = 0;
    long long curr = 0;
    long long i = 0, j = 0;
    
    while (i < n && j < n) {
        if (start[i] <= end[j]) {
            curr++;
            i++;
        } else {
            curr--;
            j++;
        }
        ans = max(ans, curr);
    }
    
    cout << ans << endl;
    return 0;
}

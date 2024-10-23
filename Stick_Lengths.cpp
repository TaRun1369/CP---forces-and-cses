// #include<bits/stdc++.h>
// using namespace std;

// long long cal(vector<long long> &v,long long curr){
//     long long ans = 0;
//     for(auto it: v){
//         ans += abs(it - curr);
//     }
//     return ans;
// }
// int main(){
//     long long n;
//     cin>>n;
//     long long low = INT_MAX,high = INT_MIN;
//     vector<long long> v(n);
//     long long sum = 0;
//     for(int i = 0;i<n;i++){
//         cin>>v[i];
//         low = min(low,v[i]);
//         high = max(high,v[i]);
//     }

//      while(low<=high){
//             long long mid = (low+high)/2;

//             long long middle = cal(v,mid);
//             if(middle < cal(v,mid - 1) && middle < cal(v,mid+1)){
//                 return mid;
//             }
//             else if(middle<cal(v,mid+1)){
//                 high = mid;
//             }
//             else{
//                 low = mid+1;
//             }
//     }
// }
#include<bits/stdc++.h>
using namespace std;

long long cal(vector<long long> &v, long long curr) {
    long long ans = 0;
    for(auto it: v) {
        ans += abs(it - curr);
    }
    return ans;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    long long low = LLONG_MAX, high = LLONG_MIN;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        low = min(low, v[i]);
        high = max(high, v[i]);
    }

    while(low < high) {
        long long mid = (low + high) / 2;

        long long mid_val = cal(v, mid);
        long long left_val = cal(v, mid - 1);
        long long right_val = cal(v, mid + 1);

        if(mid_val <= left_val && mid_val <= right_val) {
            cout << mid_val << endl;
            return 0;
        }
        else if(mid_val > left_val) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << cal(v,low) << endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// long long arr[200001];
// class segTree{
//     vector<long long> seg;
//     long long no;
//     bool plus;
//     public :
//         segTree(long long n,bool p){
//              no = n;
//              plus = p;
//             seg.resize(4*n);
//         }

//         void build(long long node,long long start,long long end){
//             if(start == end){
//                 seg[node] = arr[node];
//                 if(plus == true) seg[node] += start;
//                 else seg[node] -= start;
//             }
//             else{
//                 long long mid = (start + end)/2;
//                 build(2*node+1,start,mid);
//                 build(2*node+2,mid+1,end);
//                 seg[node] = min(seg[2*node + 1],seg[2*node + 2]);
//             }
//         }

//         void update(long long node,long long start,long long end,long long idx,long long val){
//             if(start == end){
//                 seg[node] -= arr[idx];
//                 seg[node] += val;
//                 arr[idx] = val;
//             }
//             else{
//                 long long mid = (start + end)/2;
//                 if(idx <= mid){
//                     update(2*node+1,start,mid,idx,val);
//                 }
//                 else{
//                     update(2*node+2,mid+1,end,idx,val);
//                 }
//                 seg[node] = min(seg[2*node + 1],seg[2*node + 2]);
//             }
//         }

//         long long query(long long node,long long start,long long end,long long l,long long r){
//             if (r < start || end < l) return long long_MAX;
//             if(l <= start && r >= end) return seg[node];
            
//             long long mid = (start + end)/2;
//             return min(query(2*node+1,start,mid,l,r),query(2*node+2,mid+1,end,l,r));
//         }

// };


// long long main(){
//     long long n,q;
//     cin>>n>>q;

//     for(long long i = 0;i<n;i++)cin>>arr[i];

//         segTree st1(n,true), st2(n,false);
//         st1.build(0,0,n-1);st2.build(0,0,n-1);

//         while(q--){
//             long long type;
//             cin>>type;
//             if(type == 1){
//                 long long idx,val;
//                 st1.update(0,0,n-1,idx - 1,val);
//                 st2.update(0,0,n-1,idx - 1,val);

//             }
//             else{
//                 long long k;
//                 long long left = st1.query(0,0,n-1,0,k - 1);
//                 long long right = st2.query(0,0,n-1,k - 1,n-1);
//                 cout<<min(left+(k-1),right - (k - 1))<<endl;
//             }
//         }
// }

#include <bits/stdc++.h>
using namespace std;

long long arr[200001];

class segTree {
    vector<long long> seg;
    long long n;
    bool plus;

public:
    segTree(long long n, bool p) {
        this->n = n;
        plus = p;
        seg.resize(4 * n, long long_MAX);
    }

    void build(long long node, long long start, long long end) {
        if (start == end) {
            seg[node] = arr[start];
            if (plus) seg[node] += start;
            else seg[node] -= start;
        } else {
            long long mid = (start + end) / 2;
            build(2 * node + 1, start, mid);
            build(2 * node + 2, mid + 1, end);
            seg[node] = min(seg[2 * node + 1], seg[2 * node + 2]);
        }
    }

    void update(long long node, long long start, long long end, long long idx, long long val) {
        if (start == end) {
            seg[node] = val;
            if (plus) seg[node] += start;
            else seg[node] -= start;
        } else {
            long long mid = (start + end) / 2;
            if (idx <= mid) {
                update(2 * node + 1, start, mid, idx, val);
            } else {
                update(2 * node + 2, mid + 1, end, idx, val);
            }
            seg[node] = min(seg[2 * node + 1], seg[2 * node + 2]);
        }
    }

    long long query(long long node, long long start, long long end, long long l, long long r) {
        if (r < start || end < l) return long long_MAX;
        if (l <= start && end <= r) return seg[node];
        long long mid = (start + end) / 2;
        return min(query(2 * node + 1, start, mid, l, r), query(2 * node + 2, mid + 1, end, l, r));
    }
};

long long main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n, q;
    cin >> n >> q;

    for (long long i = 0; i < n; i++) cin >> arr[i];

    segTree st1(n, false), st2(n, true);
    st1.build(0, 0, n - 1);
    st2.build(0, 0, n - 1);

    while (q--) {
        long long type;
        cin >> type;
        if (type == 1) {
            long long idx, val;
            cin >> idx >> val;
            idx--;  // Convert 1-based to 0-based index
            arr[idx] = val;
            st1.update(0, 0, n - 1, idx, val);
            st2.update(0, 0, n - 1, idx, val);
        } else {
            long long k;
            cin >> k;
            k--;  // Convert 1-based to 0-based index
            long long left = st1.query(0, 0, n - 1, 0, k);
            long long right = st2.query(0, 0, n - 1, k, n - 1);
            cout << min(left + k, right - k) << endl;
        }
    }

    return 0;
}

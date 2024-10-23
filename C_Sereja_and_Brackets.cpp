// // #include<bits/stdc++.h>
// // using namespace std;

// // class segTree{
// //     vector<vector<long long>> seg;
// //     // 0 - open ( , 1 - close ) ,2 - combined 
// //     public: 
// //     segTree(long long n){
// //         seg.resize(4*n);
// //     }


// //         void build(long long ind,long long low,long long high,string &s){
// //             if(low == high) {
// //                 seg[ind] = vector<long long>(3,0);

// //                 if(s[low] == '(') seg[ind][0]++;
// //                 else seg[ind][1]++;
// //                 return;
// //             }

// //             long long mid = (low + high) / 2;
// //             build(2*ind+1,low,mid,s);
// //             build(2*ind+2,mid+1,high,s);
// //             seg[ind][2] = min(seg[2*ind+1][0],seg[2*ind+2][1]) + seg[2*ind+1][2] + seg[2*ind+2][2];
// //             seg[ind][0] = seg[2*ind+1][0] - seg[ind][2];
// //             seg[ind][1] = seg[2*ind+1][1] - seg[ind][2];
// //         }

// //         long long queryToFindMin(long long ind,long long low,long long high,long long l,long long r){
// //             // no overlap
// //             // l r low high || low high l r
// //             if(r < low || high < l) return long long_MAX;
            
// //             // complete overlap
// //             // l low high r 
// //             else if(low >= l && high <= r) return seg[ind][2];

// //             // partial overlap 
// //             else{
// //                 long long mid = (low + high) / 2;
// //                 long long left = queryToFindMin(2*ind+1,low,mid,l,r);
// //                 long long right = queryToFindMin(2*ind+2,mid+1,high,l,r);
// //                 return (left+ right);
// //             }
// //         }  

// // };

// // long long main(){
// //     string s;
// //     cin>>s;
// //     long long m;
// //     cin>>m;
// //     segTree sg(s.size());
// //     for(long long i =0;i<m;i++){
// //         long long a,b;
// //         cin>>a>>b;
// //         cout<<sg.queryToFindMin(0,0,s.size() - 1,a-1,b-1)<<endl;
// //     }
// // }

// #include<bits/stdc++.h>
// using namespace std;

// class segTree {
//     vector<vector<long long>> seg;
//     // 0 - unmatched open (, 1 - unmatched close ), 2 - length of dataid subsequence

// public:
//     segTree(long long n) {
//         seg.resize(4 * n, vector<long long>(3, 0));
//     }

//     void build(long long ind, long long low, long long high, string &s) {
//         if (low == high) {
//             seg[ind] = vector<long long>(3, 0);
//             if (s[low] == '(') seg[ind][0]++;
//             else seg[ind][1]++;
//             return;
//         }

//         long long mid = (low + high) / 2;
//         build(2 * ind + 1, low, mid, s);
//         build(2 * ind + 2, mid + 1, high, s);
        
//         long long matches = min(seg[2 * ind + 1][0], seg[2 * ind + 2][1]);
//         seg[ind][2] = seg[2 * ind + 1][2] + seg[2 * ind + 2][2] + 2 * matches;
//         seg[ind][0] = seg[2 * ind + 1][0] + seg[2 * ind + 2][0] - matches;
//         seg[ind][1] = seg[2 * ind + 1][1] + seg[2 * ind + 2][1] - matches;
//     }

//     vector<long long> query(long long ind, long long low, long long high, long long l, long long r) {
//         if (r < low || high < l) return vector<long long>(3, 0);
//         if (low >= l && high <= r) return seg[ind];

//         long long mid = (low + high) / 2;
//         vector<long long> left = query(2 * ind + 1, low, mid, l, r);
//         vector<long long> right = query(2 * ind + 2, mid + 1, high, l, r);

//         vector<long long> res(3, 0);
//         long long matches = min(left[0], right[1]);
//         res[2] = left[2] + right[2] + 2 * matches;
//         res[0] = left[0] + right[0] - matches;
//         res[1] = left[1] + right[1] - matches;

//         return res;
//     }
// };

// long long main() {
//     string s;
//     cin >> s;
//     long long m;
//     cin >> m;
//     segTree sg(s.size());
//     sg.build(0, 0, s.size() - 1, s);
//     for (long long i = 0; i < m; i++) {
//         long long a, b;
//         cin >> a >> b;
//         vector<long long> result = sg.query(0, 0, s.size() - 1, a - 1, b - 1);
//         cout << result[2] << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

struct Node {
    long long open = 0;
    long long close = 0;
    long long full = 0;
    Node() : open(0), close(0), full(0) {}
};

class segTree {
    vector<Node> seg;

public:
    segTree(long long n) {
        seg.resize(4 * n + 1);
    }

    void build(long long ind, long long low, long long high, string &s) {
        if (low > high) return;
        if (low == high) {
            if (s[low] == '(') seg[ind].open = 1;
            else seg[ind].close = 1;
            return;
        }

        long long mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, s);
        build(2 * ind + 2, mid + 1, high, s);

        long long matches = min(seg[2 * ind + 1].open, seg[2 * ind + 2].close);
        seg[ind].full = seg[2 * ind + 1].full + seg[2 * ind + 2].full + matches;
        seg[ind].open = seg[2 * ind + 1].open + seg[2 * ind + 2].open - matches;
        seg[ind].close = seg[2 * ind + 1].close + seg[2 * ind + 2].close - matches;
    }

    Node query(long long ind, long long low, long long high, long long l, long long r) {
        if (r < low || high < l) return Node();
        if (low >= l && high <= r) return seg[ind];

        long long mid = (low + high) / 2;
        Node left = query(2 * ind + 1, low, mid, l, r);
        Node right = query(2 * ind + 2, mid + 1, high, l, r);

        Node res;
        long long matches = min(left.open, right.close);
        res.full = left.full + right.full + matches;
        res.open = left.open + right.open - matches;
        res.close = left.close + right.close - matches;

        return res;
    }
};


long long main() {
    string s;
    cin >> s;
    long long n = s.size();
    segTree sg(n);
    sg.build(0, 0, n - 1, s);
    long long q;
    cin >> q;
    while (q--) {
        long long l, r;
        cin >> l >> r;
        l--; r--;
        long long ans = sg.query(0, 0, n - 1, l, r).full;
        cout << 2 * ans << "\n";
    }
    return 0;
}